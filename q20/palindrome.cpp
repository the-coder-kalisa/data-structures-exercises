#include <iostream>
#include <cmath>

using namespace std;

string reverse(string myString){
    int strLenth = myString.length() - 1;
    string cache = myString;
    for (int i =  strLenth; i >= 0; i--) {
        myString[i] = cache[strLenth - i];
    }
    return myString;
}
string anotherReverse(string myString) {
    float stlLength = myString.length();
    for (int i = 0; i < ceil((stlLength - 1) / 2); i++) {
        char cache = myString[i];
        myString[i] = myString[stlLength - i - 1];
        myString[stlLength - i - 1] = cache;
    }
    return myString;
}
bool palindrome(string palind) {
    string reversedString = anotherReverse(palind);
    cout << reversedString << endl;
    return palind == reversedString;
}
int main() {
    cout << palindrome("nun") << endl;
    return 0;
}