#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main() 
{
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
    
    cout << "Lets go! Firstly my number is: " << GeneratedNum << endl;
    
    cout << "Now it is your turn to guess if your number is higher or lower!"
     << endl;
    
    cout<< "Good Luck! \nHigher:h\nLower:l \n";
    
    cin >>Choice;


    if (Choice == 'h' || Choice== 'l')
    {
      cout << "you have rolled " << PlayersNum;
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
  }
