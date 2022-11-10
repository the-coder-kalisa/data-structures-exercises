#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float getCircumference(float radius) {

    return 2 * M_PI * radius;
}

float getArea(float radius) {

    return M_PI * pow(radius, 2);
}

int main() {
    float radius, circumference, area;
    cout << "Enter radius of circle: ";
    cin >> radius;
    circumference = getCircumference(radius);
    area = getArea(radius);
    cout << "Circumference: " << circumference << endl << "Area: " << area << endl;
    return 0;
}