#include <iostream>

using namespace std;
int countSpaces(string str)
{
    int length = str.length();
    int i;
    int count = 0;
    for (i = 0; i < length; i++ ) {
        char chr = str[i];
        if (chr == ' ') {
            count++;
        }
    }
    return count;
}
int main()
{
    cout << countSpaces("this_ world is good bro!");
    return 0;
}