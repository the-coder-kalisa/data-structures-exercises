#include <iostream>

using namespace std;
string reverse(string str)
{
    int length = str.length() ;
    int i;
    for (i = 0; i < length / 2; i++)
    {
        char cache = str[length - i - 1];
        str[length - i - 1] = str[i];
        str[i] = cache;
    }
    return str;
}
int main()
{
    cout << reverse("kalisa");
    return 0;
}