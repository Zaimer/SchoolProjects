/* Name: John Cun 
Class: CSCI 1411-004
Description: Rock Paper Scissors Game
Lab Partner: Prinn and Scott
Status: */

#include <iostream>
#include <string>

int main()
{
	char user1, user2, p, r, s, playAgain, y ;
//while loop 
while (playAgain == 'y' || 'Y'){
//display rock paper scicssors title
	cout <<"Rock Paper Scissors!"<< endl;
	cout << " User 1 Enter R for rock, P for paper, or S for scissors." << endl;//ask user1 for choice of rock paper or scicssors
	cin >> user1 ;
	
	cout << " User 2 Enter R for Rock, P for paper, or S for scissors. " << endl;//ask user2 for choice of rock paper or scicssors
	cin >> user2 ;
//looping stuff
	if (user1 == ('r' || user1 == 'R')) //All possible outcomes for rock.
		switch (user2){
			case 'S':
			case 's':
				cout << "User 1 Wins! Rock beats Scissors." << endl;
				break;
			case 'p':
			case 'P':
				cout << "User 2 Wins! Paper beats Rock." << endl;
				break;
			case 'r':
			case 'R':
				cout << "Tie Game! Both picked rock." << endl;
		}
	if (user1 == ('s' || user1 =='S')) // All possible outcomes for scissors.
		switch (user2){
			case 'S':
			case 's':
				cout << "Tie Game! Both picked scissors." << endl;
				break;
			case 'p':
			case 'P':
				cout << "User 1 Wins! Scissors beats Paper." << endl;
				break;
			case 'r':
			case 'R':
				cout << "User 2 Wins! Rock beats Scissors." << endl;
		}
	if (user1 == ('p' || user1 == 'P')) // All possible outcomes for paper.
		switch (user2){
			case 's':
			case 'S':
				cout << "User 2 Wins! Scissors beats Paper." << endl;
				break;
			case 'p':
			case 'P':
				cout << "Tie Game! Both picked Paper." << endl;
				break;
			case 'r':
			case 'R':
				cout << "User 1 Wins! Paper beats Rock. " << endl;
		}
		cout << "Do you want to play again? (Y/N)" << endl; // Ask if you want to play again
		cin >> playAgain;
		}
	return 0;
	}	//finished
