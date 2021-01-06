#include <iostream>
using namespace std;

int main()
{
    // Initialize our variables for celsius and farenhieght for radius, height, and base area of our cylinder
    float r, l, a;
    // Get user input for radius and height
    cout << "Please input the Radius of the cylinder:\n";
    cin >> r;
    // Use the inputs to calculate the base area
    a = r*r*3.14159;
    cout << "Please input the height of the cylinder:\n";
    cin >> l;
    // Display resutls to user
    cout << "You're Cylinder has a base Area of: " << a << "\n and a Volume of:" << a*l << endl;
    return 0;
}