#include <iostream>

using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestNumberIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[smallestNumberIndex])
            {
                smallestNumberIndex = j;
            }
        }
        swap(a[i], a[smallestNumberIndex]);
    }
}

int main()
{
    int n;
    cout << "Enter number of the elements" << endl;
    cin >> n;
    cout << "Enter " << n << " elementss" << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}