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
    // const string topAndBottom = string(8,'O') + "    " + string(8,'S') + "    " + string(8,'E');


    // for(int i=0; i<8; i++)
    // {

    // }
    cout << string(8,'O') + "    " + string(8,'S') + "    " + string(8,'E') << endl;
    cout << "O" + string(6,' ') + "O    S" + string(11,' ') + "E    " + string(7,' ') << endl;
    cout << "O" + string(6,' ') + "O    S" + string(11,' ') + "E    " + string(7,' ') << endl;
    cout << "O" + string(6,' ') + "O    S" + string(11,' ') + "E    " + string(7,' ') << endl;
    cout << "O" + string(6,' ') + "O    " + string(8,'S') + "    " + string(8,'E') << endl;
    cout << "O" + string(6,' ') + "O    " + string(7,' ') + "S    E" + string(7,' ') << endl;
    cout << "O" + string(6,' ') + "O    " + string(7,' ') + "S    E" + string(7,' ') << endl;
    cout << string(8,'O') + "    " + string(8,'S') + "    " + string(8,'E') << endl;
    return 0;
    
}