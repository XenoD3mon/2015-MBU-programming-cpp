#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10000000); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	// declare variable as counter for number of guesses
	int Guess = 0;
	int Count = 0;
	
	for(;;) 
	{
		// increment guess counter
		 Count = Count + 1; 
		// read input from user
		
		cin >> Guess;
		
		// compare input from user to random number
		// print out winner, too high or too low message
		//

		if ( Guess > random_number)
		{
			cout << "Your guess is too high!" << endl;
		}else if ( Guess < random_number)
		{
			cout << "Your guess is too low!" << endl;
		}else if( Guess == random_number)
		{ 
			cout << "You guessed the number right! You win!" << endl;
			break;
		}
	}
	

	// print message with number of guesses
	//
	
	cout << Count << endl;
	return 0;
}
	