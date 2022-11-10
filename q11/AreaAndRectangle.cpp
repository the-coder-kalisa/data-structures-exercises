#include <iostream>

using namespace std;

int main() {

    float width, length, area, perimeter;
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    perimeter = (width + length) * 2;
    area = width * length;
    cout << "perimeter: " << perimeter << " and area " << area;
    return 0;
} 