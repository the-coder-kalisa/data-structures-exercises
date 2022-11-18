#include <iostream>

using namespace std;

int main() {
    
    int *ptr = 0; // direct assignment to a pointer it is error (segmentation fault)
    int r = 30;
    *ptr = r;
    cout << *ptr;
    return 0;
}