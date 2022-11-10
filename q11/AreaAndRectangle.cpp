#include <iostream>

using namespace std;

int main() {
// main function
    float width, length, area, perimeter; // initialization
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    perimeter = (width + length) * 2;
    area = width * length;
    cout << "perimeter: " << perimeter << " and area " << area;
    return 0;
} 