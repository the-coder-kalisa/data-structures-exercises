#include <iostream>
#include <cmath>

using namespace std;

class Chef
{
public:
    void makeChicken()
    {
        cout << "This chef make chickent" << endl;
    }
    void makeSpecialDish()
    {
        cout << "This chef make wowers" << endl;
    }
};

class ItalianChef : public Chef
{
public:
    void makePasta()
    {
        cout << "make pasta";
    }
    void makeSpecialDish()
    {
        cout << "This chef make chifa" << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeSpecialDish();
    ItalianChef italinaChef;
    italinaChef.makeSpecialDish();
    return 0;
}