#include <iostream>
#include <cmath>
#include <array>

using namespace std;

int *function()
{
    static int array[100];
    array[0] = 10;
    array[1] = 20;
    return array;
}
int main() {
    int *pointer = function();
    cout << pointer[0] << endl;
}   