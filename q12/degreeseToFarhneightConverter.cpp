#include <iostream>

using namespace std;

float convertToFahrenheit(float celsuis) {
    return (celsuis * 9 / 5) + 32;
}

int main() {
    float celsuis = 100;
    float fahrenheit = convertToFahrenheit(celsuis);
    cout << fahrenheit;
    return 0;
}