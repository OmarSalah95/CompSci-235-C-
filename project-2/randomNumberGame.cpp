#include <iostream>
#include <cmath> // loads in the library with the code to generate random numbers
#include <ctime> // loads in the library with the code to get the current time in seconds
using namespace std;

  
int main()
{
    srand(time(NULL)); // sets the seed of the random number the current time in seconds

    int gameActive = 1, // Intialize our game with an active flag for our while loop at runtime
        value = rand() % 100 + 1,// this is the line of code that grabs the random number itself
        tryCount = 0,// Simple counter to count how many guesses the user has made
        hintTrig = 3, // For modularity we will add the hint limit trigger
        guessLim = 10, // Initiate a guess limit as a maximum number of attemtped guesses
        lowGuessCount = 0, // Initialize low guess counter
        highGuessCount = 0, // Initialize high guess counter
        userInput; // initiate an empty variable to store the users input

    cout << value << endl; // This is mainly for debugging and testing functionality.

    // Display game rules for users
    cout << "I am thinking of a number between 1 and 100.\nCan you guess what it is?\n\n" 
        << "You will have " << guessLim << " tries to guess the right answer.\n"
        << "Hints will be made available after your " << hintTrig << " guess\n" << endl;
    // Runtime, this loop will run continually until the gameActive flag is flipped to false killing the process
    // when the user either wins, or quits the game ( I could have easily set a a guess limit here as well to end the game)
    // continuing to prompt the user for input as well as test their inputs against our random number
    while(gameActive)
    {
        // If the user has exceeded the maximum number of tries we will immediately end the game as there is no need to go through the rest of the loop.
        if (tryCount >= guessLim)
            {
                cout << "You have exceeded the maximum number of quesses.\nThe number was: " << value << "\nGame Over!" << endl;
                gameActive = 0;
            }

        cout << "You have made " << tryCount << " out of " << guessLim << " guesses." << endl;
        cout << "\nPlease enter your best guess:";
        cin >> userInput;// The prior line prompts the user for input and this one takes the users input and stores it to the userInput variable
        tryCount++; // Increment the try count to trigger hints (Could also be used to end the game after a set number of tries)

        // Quit condition will inform the user that they have quit as well as end the process
        if (userInput == -1) 
        {
            cout << "\nYou quit after " << tryCount << " tries!" 
                << "\n\nThe number was: " << value 
                << "\nHigh Guesses: " << highGuessCount 
                << "\nLow guesses: " << lowGuessCount << "\n\nGame Over!" << endl;

            gameActive = 0;
        } 
        // This is in case of the users guess being accurate triggering a win and ending the game
        else if (userInput == value) 
        {
            cout << "\n\nCongratulations you guessed right!\n"
                << "You did it in " << tryCount << " guesses!\n" 
                << "High Guesses: " << highGuessCount
                << "\nLow guesses: " << lowGuessCount << "\n\nGame Over!\n" << endl;
                
            gameActive = 0;
        }
        // This is the case which will most often be triggered in which we simply inform the user that their guess was innacrate before repeating the loop and prompting
        // the user once again for input. 
        else 
        {
            cout << "\nOuch wrong guess, Try again!\n" << endl;
            // Logic to increment either the high or low guess counter dependent on whether or not the guess is high or low, I just dont like how leaving the hint lock in place
            // forces this need for repetitive logic here
            userInput < value
                ? lowGuessCount++ 
                : highGuessCount++;
            
            // Once the user has made enough guesses it will trigger hints being displayed
            if (tryCount > hintTrig) 
            {
               if  (userInput < value) // If the users input is less than the random value it will display thier guess was low, otherwise it will display that it was too low.
                    {
                        cout << "Hint: Your guess was too low!\n" << endl;
                    } 
                else
                    {
                        cout << "Hint: Your guess was too high!\n" << endl;
                    } ;
            };
        };
    }

    return 0;
}