#include <iostream>
using namespace std;

int main()
{
    float subtotal, tiprate;
    cout << "Please enter your subtotal: \n";
    cin >> subtotal;
    cout << "Please enter a tiprate (A number representing a percentage between 0 and 100): \n";
    cin >> tiprate;
    cout << "\n\nYour total including tip comes out to be: " << subtotal + subtotal*(tiprate/100) << endl;
    return 0;
}