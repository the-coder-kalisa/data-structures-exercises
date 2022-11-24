#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Root
{
    float x1, x2, a, b, c;

private:
    void calcRoots()
    {
        x1 = -b + sqrt(pow(b, 2) - (4 * a * c));
        x2 = -b - sqrt(pow(b, 2) - (4 * a * c));
    }

public:
    Root(float aA, float aB, float aC)
    {
        a = aA;
        b = aB;
        c = aC;
    }
    string getRoots()
    {
        calcRoots();
        return "x1: " + to_string(x1 / (2 * a)) + " x2:  " + to_string(x2 / (2 * a));
    }
};

int main()
{
    Root root1 = Root(5, 10, 3);
    cout << root1.getRoots() << endl;
    return 0;
}