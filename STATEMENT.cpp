/* Boolean expressions – true or false
• Examples:
12 > 5 is true
7 <= 5 is false
if x is 10, then
x == 10 is true,
x != 8 is true, and
x == 8 is false

Can be assigned to a variable:
result = x <= y;
• Assigns 0 for false, 1 for true
• Do not confuse = and ==


if (expression)
statement;
To evaluate:
if (expression)
statement;
• If the expression is true, then statementis executed.
• If the expression is false, then
statement is skipped.
if (average > 95)
cout << "Congrats! That's a high Score" << endl;

Do not place ; after (expression)
• Place statement; on a separate line after
expression), indented:
if (score > 90)
grade = 'A';
• Be careful testing floats and doubles for
equality
• 0 is false; any other value is true

To execute more than one statement as part of an if statement, enclose them in { }:
if (score > 90)
{
grade = 'A';
cout << "Good Job!\n";
}
• { } creates a block of code


*/