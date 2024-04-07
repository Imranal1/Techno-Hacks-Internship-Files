#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    //srand(time(nullptr));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
    // Variables to store user's guess and the number of attempts
    int guess, attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!\n";
    
    // Loop until the user guesses the correct number
    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        
        // Check if the guess is too low, too high, or correct
        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        
        // Increment the number of attempts
        attempts++;
    } while (guess != secretNumber);
    
    // Congratulate the user and display the number of attempts
    cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts << " attempts.\n";
    
    return 0;
}

