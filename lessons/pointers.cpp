#include <iostream>

using namespace std;

int main() {
    

    // b 
    int k = 60;
    int *ptr = &k;
    cout << (*ptr)++ << " ";
    cout << k << endl;
    return 0;
}