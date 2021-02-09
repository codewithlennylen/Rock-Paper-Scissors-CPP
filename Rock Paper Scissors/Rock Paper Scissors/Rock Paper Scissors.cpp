// Rock Paper Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* ROOM FOR IMPROVEMENT
* Limit the number of games played e.g 3 or 5 rounds.
* Display the scores for longer games
*/

#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;

// Array holding the choices, for the computer to randomly pick.
char choices[3] = {'R','P','S'};

// Main function that runs the game.
void game() {
    bool run = true;
    char userSelection; // Store the user's choice
    char computerSelection; // Store the computer's choice

    // Game loop.
    while (run) {
        // User Play!
        cout << "Select Rock[R], Paper[P] or Scissors[S]" << endl;
        cin >> userSelection;

        // Computer Play!
        int randomIndex = rand() % 3; // Generate random number btwn 0 and 2
        computerSelection = choices[randomIndex];

        // Check for Winner.
        if (((computerSelection == 'R') && (userSelection == 'S')) || ((computerSelection == 'P') && (userSelection == 'R')) || ((computerSelection == 'S') && (userSelection == 'P'))) {
            cout << "You chose : " << userSelection << "while the Computer Chose : " << computerSelection << endl;
            cout << "You Lose !!!" << endl;
        }
        else if (computerSelection == userSelection) {
            cout << "You Chose : " << userSelection << " and Computer chose : " << computerSelection << endl;
            cout << "You Both TIE!" << endl;
        }
        else {
            cout << "You Chose : " << userSelection << " while Computer chose : " << computerSelection << endl;
            cout << "You Win !!!" << endl;
        }

    }
        
}


int main()
{
    // Random Seed
    srand(time(NULL));

    cout << "Hello World! Let's Play Rock-Paper-Scissors\n";
    // Run the game
    game();
}
