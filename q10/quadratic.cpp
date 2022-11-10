#include <iostream>
#include <cmath>

using namespace std;

float  calcHypotenuse(float a, float b, float c){
    float root1 = -b + sqrt(pow(b, 2) - (4 * a * c));
    float root2 = -b - sqrt(pow(b, 2) - (4 * a * c));
    return root1;
}

int main() {

    float result = calcHypotenuse(2, 10, 2);
    cout << result;    
    return 0;
}