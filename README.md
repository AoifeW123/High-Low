# High-Low

### I. Initiative

The project is known as High-Low. High-Low is a game that allows the computer to pick a number between 1 to 10 from a 10 sided die.  The game aspects is that the player has to guess the number, after being ask to if the number is higher or lower.  The computer will then simulate another dice roll which will be on behalf of the player. The answer given will be compared to the computer's number. After the computer will display "You Win" or "You Lose", depending on if the guess meet the conditions or not. The computer will also display the message "Draw" if the player has the same number as the computer. The player will then have the ability to restart the game or quit the game through entering a Y (restarting the game) / N (for quiting the game).

### II. Epics and User Stories

##### Epics

The first main function will be to have the computer picking a number between 1 and 10, this can be through the function name GeneratedNum. This will be set from a random number generator.

The second function would be getting the player to input a choice of "Higher or Lower" and storing that in a variable. This will be known as "Choice". This variable will then compared with the next function. 

The computer will use a function known as "PlayersNum" to generate the players number, again between 1 and 10. This will be displayed to the user. 

The computer returns the number the dice rolled and a suitable message such as “You Win!” or “You Lose!”. If the dice roll and the computer’s number are the same, the computer displays a message saying “Draw!”. This will be apart of the "Choice" fucntion.

The game then asks the user if they want to play again. If they user types “y” The game starts over. If the user types “n”, the game ends. This will be known as the array "Replay".

##### Non-Functional Requirements

Through the function playerChoice, the program will ask the user to input a guess.

If this guess is anything but higher or lower, then the same prompt should happen again. Only accepting the appropriate answers.

It should state who won the game, by replying "You Win", "You Lose" or "Draw".


##### User Stories:

As a player, I would like to be able to have the computer ask me for my guess input.

I would like to have the computer create a simulated dice roll that picks a number between 1 and 10.

I would like to see the computer compare my answer to the number generated. After the comparison the computer should respond with either a "You win" or "You Lose". This is unless we both guess the same number then I would exspect to see "Draw!"

I would like to see if after the game has been played if i can play agian or just end the game through an input of Y / N

How We Addressed The Requirements

The first step in planning for the requirements is to identfy what is being asked from the project. From the brief, using the flowchart below and research will allow the full development of the program. Breaking down each requirement and assessing how to appoarch them, will be how to plan to meet the user requirements.

### III. Genre

A guessing game that allows the user to input a guess and the user will either win or lose.

### IV. Technical Details

##### Programming Language/Enviroment

The platform that is going to be used is C++. C++ uses an IDE which will help with the syntax issues and debugging. Using C++ will allow the use of autocompletion. This is where once a string / fucntion has been created the programming language will recognise it and recommened it each time the word is typed in. It can also suggest other autocompletion for generic piece of code. This was through the online editor "Repl.it": https://repl.it/repls/ConstantStormyGraphics .


##### Programming Challenges


The first issue that occur was trying to create two different varables that both generate random numbers between 1 and 10. 

The second issue was getting these two different variables to be comapred to see who won the game. Getting them to be compared to see which number was higher / lower, or even if they were the same.

Constructing And Implementing My Code

Think of this as the method. How will you go about building your program?

Using the flowchart and the research breakdown of the requirements, this will guide the steps that were taken. The first step was to figure out how to generate two diffrent numbers that generate any number from 1 to 10. From here I will use similar code from the last project as a basis for if function that compares the two set of numbers. The use of research was included for when trying to create the user input.

##### Algorithms

The algorithm is based on a set of rules and procedures that are followed, if one rule / procedure is missing then the prgram doesn't work. The rules and procedures work by using problem-solving operations to create an output of some kind. This output is the program that ask the user for their guess and tell the user if they have won the game or not. The algorithm part is the if function. The if function in this program is going to test three scenarios: Generating the two numbers, showing the second number generated and stating if the user has won, lost or drawn. The last part of the algorithm is whether or not the user wants to play the game again; this will be through the use of yes or no.

##### Coding Standards

The standards of code that will be used need to be harmonised, consistent and in a coherent style. The coding standards that are fundental are the Good Basic Standards. These will be used to the best ability. The main focus are on:

The layout of the code.

The name of the functions and variables are strutured well.

Making sure that the code is readable and is understood.

Adding comments to the code so that each section is detailed on the use of it.

### V. Research

Research came from these websites:

https://www.w3schools.in/cplusplus-tutorial/intro/

https://en.cppreference.com/w/cpp/language

http://www.cplusplus.com/doc/tutorial/

https://mathbits.com/MathBits/CompSci/LibraryFunc/rand.htm

### VI. Project Management

##### Burndown Chart

![](https://github.com/AoifeW123/High-Low/blob/master/Burndown.jpg)

#####User Stories Tracking Chart (Which Stories Have Been Completed)

Table showing user stories with weighting, due date and completion state

![](https://github.com/AoifeW123/High-Low/blob/master/Implimented%20HighLow%202.jpg)

##### Flowchart
Flowchart showing how the program will work

![](https://github.com/AoifeW123/High-Low/blob/master/High%20N%20Low%20FlowChart.jpg)

##### Functions

Here is the two different generated numbers that both will pick a number between 1 and 10.

        int  GeneratedNum;
        int  PlayersNum;
     char Choice;
     char Replay = 'y';
        cout << "Welcome to guess higher or lower!" << endl;
        cout << "This game provides a number and you have to guess if your number will be higher or lower!" << endl; 
      while (Replay == 'y')
    {
      srand (time(NULL));
    GeneratedNum = rand() % 10 + 1;
     srand (time_t(rand()));
    PlayersNum = rand() % 10 + 1;


This function will display the both the numbers on the screen, at different times:

                  cout << "Lets go! Firstly my number is: " << GeneratedNum << endl;
                  cout << "Now it is your turn to guess if your number is higher or lower!"
                    << endl;
                    ...
                   cout << "You rolled a " << PlayersNum;

This fucntion is asking for the user to guess if they think the number will be higher or lower:

            cout << "Now it is your turn to guess if your number is higher or lower!" << endl;
            cout<< "Good Luck! \nHigher:h\nLower:l \n";
                        
               cin >>Choice;

                    if (Choice == 'h' || Choice== 'l')
               {
                        cout << "You rolled a " << PlayersNum;
                  if (Choice == 'h') 
                   {
                        if (PlayersNum>GeneratedNum)
                   {
                        cout << "\nYou win";
                   }
                        else if (PlayersNum<GeneratedNum)
                   {
                        cout << "\nYou lose";
                   }
                        else if (PlayersNum==GeneratedNum)
                   {
                        cout << "\nDraw";
                    }
                }

This if / while function is going to compare the answer given with the numbers to determin who has won, through a set of conditions:

                
     if (Choice == 'l')
        {
        if (PlayersNum<GeneratedNum)
          {
            cout << "\nYou win";
          }
          else if (PlayersNum>GeneratedNum)
           {
           cout << "\nYou lose";
          }
       
This section is showing what should happen if both of the numbers that have been generated are the same number - "Draw":
                
          else if (PlayersNum==GeneratedNum)
                {
                 cout << "\nDraw";
                }
            }

Finally this section is asking if the user wants to play the game again:

        cout << "\nDo you dare play again? y/n\n";
         cin >> Replay;
        }
                cout << "Good Game, Bye!!!";
        }


#### VII. Evaluation
