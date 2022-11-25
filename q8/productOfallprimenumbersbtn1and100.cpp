#include <iostream>

using namespace std;

int main()
{
    int i = 2, product = 1;
    while (i < 100)
    {
        int j = 2, numberOfMultiplication = 0;
        while (j < i)
        {

            // loop to get all numbers less than the number we are on
            if (i % j == 0)
            {

                // condition to see if i is divisible by j and increment its number of division
                numberOfMultiplication++;
            }
            j++;
        }
        if (numberOfMultiplication == 0)
        {

            // check if it has only one division
            product *= i;
        }
        i++;
    }
    cout << product;
    return 0;
}