#M2Lab2_Blackman
# Blackman, James
#Learn some simple graphics tools.
#2-5-2025


from turtle import *

screen =  Screen()
screen.bgcolor("black")

t = Turtle()
t.speed(0)

def drawing():
    """ moved the logic to its own function """

    for side in range (18):             
        t.forward(90) # forward
        t.right(20)

    for side in range (18):            
        t.forward(80) # forward
        t.left(20)


    for side in range (18):             
        t.forward(70) # forward
        t.right(20)

    for side in range (18):            
        t.forward(60) # forward
        t.left(20)

    for side in range (18):             
        t.forward(50) # forward
        t.right(20)           

    for side in range (18):             
        t.forward(90) # forward
        t.left(20)

    for side in range (18):            
        t.forward(80) # forward
        t.right(20)


    for side in range (18):             
        t.forward(70) # forward
        t.left(20)

    for side in range (18):            
        t.forward(60) # forward
        t.right(20)

    for side in range (18):             
        t.forward(50) # forward
        t.left(20)

    for side in range (18):             
        t.forward(40) # forward
        t.right(20)
    for side in range (18):            
        t.forward(40) # forward
        t.left(20)


    for side in range (18):             
        t.forward(30) # forward
        t.right(20)

    for side in range (18):            
        t.forward(30) # forward
        t.left(20)

    for side in range (18):             
        t.forward(20) # forward
        t.right(20)           

    for side in range (18):             
        t.forward(20) # forward
        t.left(20)


    for side in range (18):            
        t.forward(15) # forward
        t.right(20)


    for side in range (18):             
        t.forward(15) # forward
        t.left(20)

    for side in range (18):            
        t.forward(10) # forward
        t.right(20)


    for side in range (18):             
        t.forward(10) # forward
        t.left(20)

    for side in range (18):            
        t.forward(5) # forward
        t.right(20)

    for side in range (18):             
        t.forward(5) # forward
        t.left(20)          
    '''for side in range (18):            
        t.forward(4) # forward
        t.right(20)

    for side in range (18):             
        t.forward(4) # forward
        t.left(20)          
    for side in range (18):            
        t.forward(3) # forward
        t.right(20)

    for side in range (18):             
        t.forward(3) # forward
        t.left(20)          
    for side in range (18):            
        t.forward(2) # forward
        t.right(20)

    for side in range (18):             
        t.forward(5) # forward
        t.left(20)          
    for side in range (18):            
        t.forward(2) # forward
        t.right(20)

    for side in range (18):             
        t.forward(1) # forward
        t.left(20)          
    for side in range (18):            
        t.forward(1) # forward
        t.right(20)

    for side in range (18):             
        t.forward(0) # forward
        t.left(20)'''


def main():

    t.pencolor("white")
    pensize(1)
    t.shape("turtle")

    # move a bit to start
    t.penup()
    t.fd(20) # forward
    t.pendown()
    t.right(90)
    t.speed = 90 
    for mycolor in ("white", "cyan3", "darkblue"):
        t.pencolor(mycolor)
        if mycolor == "white":
            t.pensize(8)
        if mycolor == "cyan3":
            t.pensize(4)
        if mycolor == "darkblue":
            t.pensize(1)
        drawing()



# start program
main()
