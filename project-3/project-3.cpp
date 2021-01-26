#include <iostream>
#include <cmath> 
#include <string> 
using namespace std;

const int MIN_NUMBER = 1;
const int MAX_NUMBER = 8;
int image_number = 1;

int  forward ( int current_number ) {
    // return the new image number

    if (current_number < MAX_NUMBER){
        image_number = ++current_number;
    } else {
        image_number = MIN_NUMBER;
    }

    return image_number;
}

int  backward ( int current_number ) {
    // return the new image number
    if (current_number == MIN_NUMBER){
        return MIN_NUMBER;
    }
    image_number = --current_number; 
    return image_number;
}

 // use the constants MIN_NUMBER, MAX_NUMBER, do not use hard coded 1 or 8


string  createFileName ( int current_number ) {
    // return a filename like pictureX.gif
    return "picture"+ to_string(current_number) + ".gif";
}

string  createRandomName (  ) {
    // return a filename like pictureX.gif
	// using a RANDOM number between MIN_NUMBER and MAX_NUMBER 
    return "picture" + to_string(rand() % (MAX_NUMBER - 1) + 1)+ ".gif";
}

void  showMenu (  ) {
    // write a loop
    // Display a menu, with options 1 .. N for each function above, and an exit option
	// get user input and call the correct function using a SWITCH
	// print out the NEW image number everytime the value changes
    cout << endl << "----------------------------Main Menu----------------------------" << endl;
    cout << endl << "                           Command List      " << endl;
    cout << endl << " Option 1: Will display a help menu with a list of accepted commands" << endl;
    cout << endl << " Option 2: Forward Command Increments our image carousel forwards" << endl;
    cout << " Option 3: Forward Command Increments our image carousel backwards" << endl;
    cout << " Option 4: Generates and prints our current file name" << endl;
    cout << " Option 5: Generates and prints a random file name between our min\n\tand max values (1-8)" << endl;
    cout << " Option 6: Quit our application" << endl;
    cout << endl << "-----------------------------------------------------------------" << endl;
}

int main () {
  //  call showMenu
    int running = 1,
        command;

    string Filler = "\n\nImage Number is now at: ",
    newFileFiller = "\n\nGenerated File Name: ";


    showMenu();

  while (running){
      cout << "Enter a Command Code: ";
      cin >> command;

      switch(command){
        case 1: 
            showMenu;
            break;
        case 2: 
            cout << filler << forward(image_number) << endl;
            break;
        case 3:
            cout << filler << backward(image_number) << endl;
            break;
        case 4: 
            cout << newFileFiller << createFileName(image_number) << endl;
            break;
        case 5:
            cout << newFileFiller << createRandomName() << endl;
            break;
        case 6:
            running = 0;
            break;
      }
  }
  return 0;
}