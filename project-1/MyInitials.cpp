//  OOOOOO     SSSSSSSS    EEEEEEEE
// O      O    S           E
// O      O    S           E
// O      O    S           E
// O      O    SSSSSSSS    EEEEEEEE
// O      O           S    E
// O      O           S    E
//  OOOOOO     SSSSSSSS    EEEEEEEE


#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Since we have multiple repeated patterns this is an opportunity to DRY our code and avoid repetition. Since the Initials can be broken up into 4 repeated patters
    // We can save these simple patterns into variabls and call them as needed rather than typing it all out over and over. We can also use the built in string object
    // from the standard lib to get rid of much of the repetition in constructing the patterns.
    const string 
        topAndBottom = string(8,'O') + "    " + string(8,'S') + "    " + string(8,'E'),
        pattern1 = "O" + string(6,' ') + "O    S" + string(11,' ') + "E    " + string(7,' '),
        middle = "O" + string(6,' ') + "O    " + string(8,'S') + "    " + string(8,'E'),
        pattern2 = "O" + string(6,' ') + "O    " + string(7,' ') + "S    E" + string(7,' ');
    // Next we will iterate through a for loop between 0 and 7(giving us our 8x8 grids individual rows), then we can iterate through each of the rows, printing the corresponding
    // pattern of chars from our initials, using our index pointer as a row marker and trigger of our conditionals.
    for(int i=0; i<8; i++)
    {
        i==0 or i == 7 
            ? cout << topAndBottom + "\n" 
        : i>0 and i<4 
            ? cout << pattern1 + "\n" 
        : i == 4
            ? cout << middle + "\n" 
        : cout << pattern2 + "\n" ;
    }
    // This is one very repetative method of doing this, it will work if uncommented.
    // cout << string(8,'O') + "    " + string(8,'S') + "    " + string(8,'E') << endl;
    // cout << "O" + string(6,' ') + "O    S" + string(11,' ') + "E    " + string(7,' ') << endl;
    // cout << "O" + string(6,' ') + "O    S" + string(11,' ') + "E    " + string(7,' ') << endl;
    // cout << "O" + string(6,' ') + "O    S" + string(11,' ') + "E    " + string(7,' ') << endl;
    // cout << "O" + string(6,' ') + "O    " + string(8,'S') + "    " + string(8,'E') << endl;
    // cout << "O" + string(6,' ') + "O    " + string(7,' ') + "S    E" + string(7,' ') << endl;
    // cout << "O" + string(6,' ') + "O    " + string(7,' ') + "S    E" + string(7,' ') << endl;
    // cout << string(8,'O') + "    " + string(8,'S') + "    " + string(8,'E') << endl;
    return 0;
}