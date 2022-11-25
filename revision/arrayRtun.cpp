#include <array>
#include <iostream>

using namespace std;
int *function()
{
   static int array[5] = {1, 2, 3, 4, 5};
   return array;
}

int main()
{
    int *arr = function();
    cout << arr[0];
    return 0;
}