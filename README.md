# High-Low

### I. Initiative

The project is known as High-Low. High-Low is a game that allows the computer to pick a number between 1 to 10 from a 10 sided die.  The game aspects is that the player has to guess the number, after being ask to if the number is higher or lower.  The computer will then simulate another dice roll which will be on behalf of the player. The answer given will be compared to the computer's number. After the computer will display "You Win" or "You Lose", depending on if the guess meet the conditions or not. The computer will also display the message "Draw" if the player has the same number as the computer. The player will then have the ability to restart the game or quit the game through entering a Y (restarting the game) / N (for quiting the game).

### II. Epics and User Stories
Epics
Outlining the main fuctions of the game

The first main function will be to have the computer picking a number between 1 and 10, this can be through the function name randomNum. This will be set from a random number generator.

The second function would be getting the player to input a choice of "Higher or Lower" and storing that in a variable. This will be known as playerChoice. This variable will then compared with the next function. 

The computer will use a function known as DiceRoll to generate the players number, again between 1 and 10. THis will be displayed to the user. 

The computer simulates a dice roll on behalf of the player which generates a number from 1 – 10 inclusive
The computer returns the number the dice rolled and a suitable message such as “You Win!” or “You Lose!”
If the dice roll and the computer’s number are the same, the computer displays a message saying “Draw!”
The game then asks the user if they want to play again. If they user types “y” The game starts over. If the user types “n”, the game ends.


Non-Functional Requirements
Asthetic or non essential requirements



User Stories:

As a player, I would like to be able to have the computer ask me for my guess input.

I would like to have the computer create a simulated dice roll that picks a number between 1 and 10.

I would like to see the computer compare my answer to the number generated. After the comparison the computer should respond with either a "You win" or "You Lose". This is unless we both guess the same number then I would exspect to see "Draw!"

I would like to see if after the game has been played if i can play agian or just end the game through an input of Y / N


How We Addressed The Requirements
How will your planned product meet the user requirements

### III. Genre

A guessing game that allows the user to input a guess and the user will wither win or lose.

### IV. Technical Details

The platform that is going to be used is C++. C++ uses an IDE which will help with the syntax issues and debugging. Using C++ will allow the use of autocompletion. This is where once a string / fucntion has been created the programming language will recognise it and recommened it each time the word is typed in. It can also suggest other autocompletion for generic piece of code.

Programming Language/Enviroment

Programming Challenges
State the programing challenges you are trying to overcome

Constructing And Implementing My Code
Think of this as the method. How will you go about building your program?

Algorithms
Explanation of the algorithms behind your program

Coding Standards
Standard for the code you will be writting

### V. Research
### VI. Project Management
Burndown Chart
Example Burndown Chart

Chart showing the completion of user stories over time

User Stories Tracking Chart (Which Stories Have Been Completed)
Table showing user stories with weighting, due date and completion state

Flowchart
Flowchart showing how the program will work

Functions
Descriptions of functions given on flowchart
