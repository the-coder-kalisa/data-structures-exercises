#include <iostream>

using namespace std;

int main() {
    string name = "Kalisa fafda";
    name[0] = 'I';
    cout << name.substr(name.find(" ")) << endl;
    return 0;
}