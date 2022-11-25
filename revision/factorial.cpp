#include <array>
#include <iostream>

using namespace std;

int *reverseArra(int arr[], int size)
{
    static int array[3];
    for (int i = size; i > -1; i--) {
        array[i] = arr[size - 1 - i];
    }
    return array;
}

int main()
{
   int b = 275;
   cout << (b >> 3);
}