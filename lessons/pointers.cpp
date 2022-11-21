#include <iostream>
#include <array>
#include <cmath>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// int power(int x, int n);

int sumDigitUsingLoop(int digit) {
   string digitString = to_string(digit);
   int sum = 0;
   for (int i = 0; i < digitString.length(); i++) {
        int number =  int (digitString[i]) - 48;
        sum += number;
   }
    return sum;
}

int sumDigitUsingRecusive(int n) {
    
}

int main() {
    cout << sumDigitUsingLoop(53);
    return 0;
}