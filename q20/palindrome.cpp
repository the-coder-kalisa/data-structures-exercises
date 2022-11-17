#include <iostream>

using namespace std;

string reverse(string myString){
    int strLenth = myString.length() - 1;
    string cache = myString;
    for (int i =  strLenth; i >= 0; i--) {
        myString[i] = cache[strLenth - i];
    }
    return myString;
}
bool palindrome(string palind) {
    string reversedString = reverse(palind);
    return palind == reversedString;
}
int main() {
    cout << palindrome("hello") << endl;
    return 0;
}