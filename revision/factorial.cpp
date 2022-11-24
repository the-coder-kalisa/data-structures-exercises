#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n)
{
    cout << "f";
    if (n < 0)
        return -1;
    if (n == 0)
        return 1;
    int smallAnswer = factorial(n - 1);
    cout << n << endl;
    return n * smallAnswer;
}

int main()
{
    int n = 5;
    int answer = factorial(n);
    // cout << answer;
    return 0;
}