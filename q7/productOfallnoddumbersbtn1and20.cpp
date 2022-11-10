#include <iostream>

using namespace std;

int main() {
    int i = 3, product = 1;
    while ( i < 20) {

        if (i % 2 != 0) {
            // multiply odd numbers eachother
            product *= i;
        }
        i++;
    }
    cout << product;
    return 0;
}