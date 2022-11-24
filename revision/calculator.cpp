#include <iostream>
using namespace std;

const string options[] = {"Add", "Substract", "Multiplication", "Division"};
void calc();
int main()
{
    calc();
    return 0;
}
void calc()
{
    int opt;
    cout << "MENU" << endl;
    for (int i = 0; i < sizeof(options) / sizeof(options[0]); i++)
    {
        cout << i + 1 << ") " << options[i] << endl;
    }
    cout << "Enter your choice: ";
    cin >> opt;
    int num1, num2;
    float result;
    cout << "Enter your numbers: ";
    cin >> num1 >> num2;
    switch (opt)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = num1 / num2;
        break;
    default:
        exit(-1);
        break;
    }
    cout << "Result: " << result << endl
         << endl;
    cout << "Continue? ";
    char cont;
    cin >> cont;
    if (cont == 'y')
    {
        calc();
    }
    else
    {
        exit(-1);
    }
}