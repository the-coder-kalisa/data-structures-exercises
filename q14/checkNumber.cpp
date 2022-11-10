#include <iostream>

using namespace std;

string check(int num) {
    cout << num << " is  ";
    if (num > 0) {
        return "positive";
    }
    else if (num < 0) {
        return"negative";
    } else {
        return"zero";
    }
}

int main() {
    int num1 = -3;
    cout << check(num1);
    return 0;
}