#include <iostream>
using namespace std;

// Function to calculate area of a square
float areaOfSquare(float side) {
    return side * side;
}

int main() {
    float side;
    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area of the square = " << areaOfSquare(side) << endl;

    return 0;
}


