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
    cout << string(8,'O') + "    " + string(8,'S');

    return 0;
}