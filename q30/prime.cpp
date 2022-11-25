#include <iostream>
#include <vector>
using namespace std;

string checkNthPrime(int check)
{
    vector<int> primeNumbers = {};
    int i = 2;
    while (i <= 13)
    {
        int j = 2, numberOfProd = 0;
        while (j < i)
        {
            if (i % j == 0)
            {
                if (numberOfProd > 0)
                {
                    break;
                }
                numberOfProd++;
            }
            j++;
        }
        if (numberOfProd == 0)
        {
            primeNumbers.push_back(i);
        }
        i++;
    }
    int index;
    for (int i = 0; i < sizeof(primeNumbers) / sizeof(primeNumbers[0]); i++)
    {
        if (check == primeNumbers[i])
        {
            index = i + 1;
        }
    }
    return to_string(index) + "nth";
}

int main()

{
    cout << checkNthPrime(2);
    return 0;
}