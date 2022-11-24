#include <iostream>
#include <vector>
using namespace std;

int main()
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
    for (int i : primeNumbers)
    {
        // cout << i << endl;
    }
    return 0;
}