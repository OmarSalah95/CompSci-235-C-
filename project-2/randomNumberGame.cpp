#include <iostream>
#include <cmath> // loads in the library with the code to generate random numbers
#include <ctime> // loads in the library with the code to get the current time in seconds
using namespace std;

  
int main()
{
    srand(time(NULL)); // sets the seed of the random number the current time in seconds

    int gameActive = 1, // Intialize our game with an active flag for our while loop at runtime
        value = rand() % 100 + 1,// this is the line of code that grabs the random number itself
        userInput, // initiate an empty variable to store the users input
        tryCount; // Simple counter to count how many guesses the user has made

    cout << value << endl; // This is mainly for debugging and testing functionality.

    // Display game rules for users
    cout << "I am thinking of a number between 1 and 100.\nCan you guess what it is? You can exit at anytime by entering -1" << endl;

    // Runtime, this loop will run continually until the gameActive flag is flipped to false killing the process
    // when the user either wins, or quits the game ( I could have easily set a a guess limit here as well to end the game)
    // continuing to prompt the user for input as well as test their inputs against our random number
    while(gameActive)
    {
        cout << "Please enter your best guess:" << endl;
        cin >> userInput;

        // Quit condition will inform the user that they have quit as well as end the process
        if (userInput == -1) 
        {
            cout << "You quit.\nThe number was: " << value << "\nGame Over!" << endl;
            gameActive = 0;
        } 
        else if (userInput == value) // This is in case of the users guess being accurate triggering a win and ending the game
        {
            cout << "Congratulations you guessed right!\nGame Over!" << endl;
            gameActive = 0;
        }
        else // This is the case which will most often be triggered in which we simply inform the user that their guess was innacrate before repeating the loop and prompting the user once again for input. 
        {
            cout << "Ouch wrong guess, Try again!" << endl;
        };
    }

    return 0;
}