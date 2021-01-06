#include <iostream>
using namespace std;

int main()
{
    // Initialize our variables for celsius and farenhieght
    float C, F;
    // Promot user for input in degrees C
    cout << "Enter the Temperature in Celesius that you would like to convert\n";
    cin >> C;
    // Perform and display conversion.
    cout << "\n" << C << "*C is " << C*9/5+32 << "*F\n\n";

    return 0;
}