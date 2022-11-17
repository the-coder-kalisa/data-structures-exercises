#include <iostream>
#include <cmath>

using namespace std;

class Chef{
    public:
        void makeChicken() {
            cout << "This chef make chickent" << endl;
        }
};

class ItalianChef : public Chef {
    void makePasta() {
        cout << "make pasta";
    }
};

int main() {
    Chef chef;
    chef.makeChicken();
    ItalianChef italinaChef;
    italinaChef.makeChicken();
    return 0;
}