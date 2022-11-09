#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for(int i = 2; i < 10; i++) {
        for (int j = 2; j < 10; j++) {
            cout << "i: " << i << " and " << "j: " << j;
            float hypoteneuse = sqrt(pow(i, 2) + pow(j, 2));
            cout << hypoteneuse << endl;
        }
    }
    return 0;
}