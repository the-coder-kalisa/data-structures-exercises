#include <iostream>
using namespace std;
int main()
{
    int records[] = {1, 5, 8, 9};
    int spareRecords[5] = {};
    int i = 0, place = 2, n = 4, item = 7;
    while (i < n)
    {
        if (i <= place) {
            spareRecords[i] = records[i];
        } else {5
            spareRecords[i+1] = records[i];
        }
        i++;
    }
    spareRecords[place] = item;

    for (int i : spareRecords) {
        cout << i << endl;
    }
}