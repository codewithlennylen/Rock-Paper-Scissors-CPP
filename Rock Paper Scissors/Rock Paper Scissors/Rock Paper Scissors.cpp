// Rock Paper Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;


char choices[3] = {'R','P','S'};

void game() {
    bool run = true;
    char userSelection;
    char computerSelection;
    while (run) {
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

    cout << "Hello World!\n";
    game();
}
