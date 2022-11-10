#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, volume;
    cout << "Enter edge length: ";
    cin >> a;
    
    volume = pow(a, 3);
    cout << volume << endl;
    return 0;
}