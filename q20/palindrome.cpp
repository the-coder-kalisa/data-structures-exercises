#include <iostream>

using namespace std;

string reverse(string myString){
    int strlen = myString.length();
    int s = strlen - 1;
    for (int i = 0; i < (strlen / 2); i++) {
        char temp = myString[i];
        myString[i] = myString[s];
        myString[s] = temp;
    }
    return myString;
}
bool palindrome(string palind) {
    string reversedString = reverse(palind);
    return palind == reversedString;
}
int main() {
    cout << palindrome("nun") << endl;
    return 0;
}