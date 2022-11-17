#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int age  = 19;
    int *page = &age;
    cout << *page;
    return 0;
}