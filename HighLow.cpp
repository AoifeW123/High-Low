#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() 
{
  //Creating an interger than will generate randowm numbers.
  int  GeneratedNum;
  int  PlayersNum;
  // Used for creating an array so it can be used for a potential of 256 different values. Only a few values are needed.
  char Choice;
  char Replay = 'y';
  
  //Welcoming phase to make the game more friendly the endl is used to have each output on the next line.
 cout << "Welcome to guess higher or lower!" << endl;
 cout << "This game provides a number and you have to guess if your number will be higher or lower!" << endl; 

  // The start of the while loop
  while (Replay == 'y')
  
  {
   // used to stop repetition between the runs and picking a number between 1 and 10
    srand (time(NULL));
    GeneratedNum = rand() % 10 + 1;
  
     //Picking a random number interger, uses srand prevents the same value being used.
    srand (time_t(rand()));
    PlayersNum = rand() % 10 + 1;
    
    // Making tha game visually friendly to display the number and interactions.
    cout << "Lets go! Firstly my number is: " << GeneratedNum << endl;
    
    cout << "Now it is your turn to guess if your number is higher or lower!"
     << endl;
    
    cout<< "Good Luck! \nHigher:h\nLower:l \n";
    
    cin >>Choice;

  // This is creating the outcome than will state the winner or if there has been a draw.
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
      
      // This is comapring both number that has been generate to see if one number is grater than the other, or if they are equal. Triggering the choice outcome and replay function.
  
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
          else if (PlayersNum==GeneratedNum)
          {
           cout << "\nDraw";
         }
       }
    }
    //add the replay function here
    cout << "\nDo you dare play again? y/n\n";
  cin >> Replay;
  }
  cout << "Good Game, Bye!!!";
  // ends the program.
  return 0;
  }
