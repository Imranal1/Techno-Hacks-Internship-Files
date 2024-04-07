#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    
    string choices[] = {"Rock", "Paper", "Scissors"};
    int computerChoice;
    int userChoice;
    
    // Prompt user to choose
    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    cin >> userChoice;
    
    // Generate computer's choice
    computerChoice = rand() % 3;
    
    cout << "You chose " << choices[userChoice] << ".\n";
    cout << "Computer chose " << choices[computerChoice] << ".\n";
    
    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "Congratulations! You win!\n";
    } else {
        cout << "Computer wins! Better luck next time.\n";
    }
    
    return 0;
}

