#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{

	int GeneratedNum, PlayerGuess;

	srand(time(0)); //seed random number generator

  // This will be a numbe chosen randomly by the computer 
	GeneratedNum = rand() % 10 + 1; // random number between 1 and 10
  
  //This will be a number provided by the user, from an input.
  //Needs to change from a user input to a another generated number

	PlayerGuess= rand() % 10 + 1; // random number between 1 and 10

	cout << "Welcome to Higher or Lower! The game  Where you have to Guess if you number will be higher or lower!\n\n";

	do

	{

		cout << "You number is: "  << PlayersGuess << "!";


		;

		if (PlayersGuess > GeneratedNum)

			cout << "Too high!\n\n";

		else if (PlayersGuess < GeneratedNum)

			cout << "Too low!\n\n";

		
    else if (PlayersGuess == GeneratedNum)

      cout<< "Draw!\n";
    
  

	} while (PlayersGuess != GeneratedNum);



	cin.ignore();

	cin.get();

	return 0;

}
