#include <iostream>
#include <cmath>
#include <array>

using namespace std;

array<int, 10> arrayReturner();

int main() {
    array<int, 10> arr = arrayReturner();
    cout << "Elements in array are: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
array<int,  10> arrayReturner(){
    array<int, 10> arr;
    int c = 0;
    for (int i = 0;  i < 10; i++) {
        arr[i] = c;
        c++;
    }
    return arr;
}

