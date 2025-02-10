#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    int player_x = 1;
    int player_y = 1;
    int dx = 2;
    int dy = 2;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
       

       // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(MAROON);
            // method one
            /*
            player_x = player_x + dx;
            player_y = player_y + dy;
            
            if (player_x > screenWidth) {
                dx = -2;
            }
            if (player_y > screenWidth) {
                dy = -2;
            }
            */
            // method two
            player_x = player_x + 2;
            player_y = player_y + 2;
            // guessing the text is 200 by 20
            if (player_x > screenWidth - 250) 
                {
                player_x = 0;
                }
                
                if (player_y > screenHeight - 100) 
                {
                player_y = 0;
                }
            
            DrawText("Congrats! You created your first window!", player_x, player_y, 20, PURPLE);

    

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}