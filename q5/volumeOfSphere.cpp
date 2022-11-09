#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

float calcuateVolume(int radius) {
    // function to calcultate volume
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() {
    // main function in q5
    int radius = 10;
    float volume = calcuateVolume(radius);
    cout << volume;
    return 0;
}