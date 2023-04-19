#include <iostream>
using namespace std;
int primenth(int n)
{
    int i = 2; // initial prime number
    int counter = 1;
    while (counter < n)
    {
        i++;
        int checkFactorAvailability = 0;
        for (int k = 2; k < i; k++)
        {

            if (i % k == 0)
            {
                checkFactorAvailability++;
            }
        }
        if (checkFactorAvailability == 0)
        {
            counter++;
        }
    }
    return i;
}
int main()
{
    int nthp = primenth(6);
    cout << nthp << endl;
    return 0;
}