#include <iostream>

using namespace std;

int main() {
    int i = 2, sum = 0;
    while ( i < 100) {
        if (i % 2 == 0) {   
         // adding even number to eachother
         
         sum += i;
        }
        i++;
    }
    cout << sum;
    return 0;
}