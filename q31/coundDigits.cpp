#include <iostream>

using namespace std;

int countDigits(int digit, int n)
{
    int repeating = 0, i = 0;
    while (i < to_string(digit).length())
    {
        int d = (int)to_string(digit)[i] - 48;
        if (d == n) {
            repeating++;
        }
        i++;
    }
    return repeating;
}

int main()
{
    cout << countDigits(3331, 3);
    return 0;
}