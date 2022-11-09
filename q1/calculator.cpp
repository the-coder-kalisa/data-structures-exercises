#include <iostream>
#include <cstring>

using namespace std;

int getArrLength(string arr[]){
    // this function returns length of the array
    return sizeof(arr[0]) / sizeof(arr);
}

void calc() {
   // recusive function to do the calculations
   string choices[] = {"Add", "Substract", "Multiplication", "Division"};
   int choicesLenght = getArrLength(choices);
   for(int i = 0; i < choicesLenght; i++) {
       cout << i + 1 << ". " + choices[i] << endl;
   }
   cout << "Enter your choice: ";
   int choosed;
   cin >> choosed;
   cout << "Enter your two numbers: ";
   int first, second, result = 0;
   cin >> first >> second;
   switch (choosed) {
        case 1:
        result = first + second;
        break;
        case 2:
        result = first - second;
        break;
        case 3:
        result = first * second;
        break;
        case 4:
        result = first / second;
        break;
        default:
        exit(-1);
        break;
   }
   cout << "Result: " << result << endl;
   cout << "Continue" << endl;
   string cont;
   cin >> cont;
   if(cont == "y"){
    calc();
   }else{
    exit(-1);
   }
}

int main() {
    // main function in q2
    calc();
   return 0;
}
