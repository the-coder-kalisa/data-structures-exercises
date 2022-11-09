#include <iostream>

using namespace std;

int main() {
    // main function
    int i = 3, product = 1;
    while ( i < 20) {
        // loop to get every number less than 20 but greater than 3
        if (i % 2 != 0) {
            // multiply odd numbers ||
            product *= i;
        }
        i++;
    }
    cout << product;
    return 0;
}