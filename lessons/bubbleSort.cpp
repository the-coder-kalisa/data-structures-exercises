#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 3, 5, 6, 2, 0, 2 ,4};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    for(int i = 0; i < length; i++) {
        
    }
    for(auto number: numbers) {
        cout << number << endl;
    }
    return 0;
}