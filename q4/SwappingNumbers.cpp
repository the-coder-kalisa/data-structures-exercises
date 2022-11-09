#include <iostream>

using namespace std;

int main() {
    // main funciton in q4
    int num1, num2, temp;
    cout << "Input 1st number: " << endl;
    cin >> num1;
    cout << "Input 2nd number: " << endl;
    cin >> num2;
    temp = num2;
    num2 = num1;
    num1 = temp;    
    cout << "After swapping the 1st number is : " << num1 << endl;
    cout << "After swapping the 2nd number is : " << num2 << endl; 
    return 0;
}