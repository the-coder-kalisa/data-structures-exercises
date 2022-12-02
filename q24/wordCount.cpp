#include <iostream>

using namespace std;
struct wordCount
{
    int countWithoutSpaces;
    int countWithspaces;
    int numWords;
};

wordCount countWords(string str)
{
    int countWithoutSpace = 0, length = str.length(), countWordss = 1, i;
    // loop to get without spaces;
    for (i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            countWordss++;
            continue;
        }
        countWithoutSpace++;
    }
    wordCount wordcounted;
    wordcounted.countWithoutSpaces = countWithoutSpace;
    wordcounted.countWithspaces = length;
    wordcounted.numWords = countWordss;
    return wordcounted;
}

int main()
{
    string str;
    cout << "Enter your string to be counted: ";
    getline(cin, str);
    wordCount result = countWords(str);
    cout << "without chars: " << result.countWithoutSpaces << endl;
    cout << "with chars: " << result.countWithspaces << endl;
    cout << "count words: " << result.numWords << endl;
    return 0;
}