#include <iostream>

using namespace std;

int main() {
    int i = 2, product = 1;
    while (i < 100) {
        int j = 2, numberOfMultiplication = 0;
        while ( j < i) {
            if (i  % j == 0) {
                numberOfMultiplication++;
            }
            j++;
        }
        if (numberOfMultiplication == 0) {
            product *= i;
        }
        i++;
    }
    cout << product;
    return 0;
}