#include <iostream>
#include <array>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int power(int x, int n);

int main() {
    cout << power(5, 3);
    return 0;
}
int power(int x, int n) {
    cout << n << endl;
    if (n == 0) {
        return 1;
    }
    int smallOutput = power(x, n-1);
    return x*smallOutput;
}