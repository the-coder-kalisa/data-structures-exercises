#include <iostream>

using namespace std;
int getLengthOfStr(string str) {
    int count = 0;
    while (str != "")
    {
        str.pop_back();
        count++;
    }
    return count;
}
int main() {
    cout << getLengthOfStr("kalisa");
    return 0;
}