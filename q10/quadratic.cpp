#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

vector<string> calcHypotenuse(float a, float b, float c){
    vector<string> roots;
    float root1 = -b + sqrt(pow(b, 2) - (4 * a * c));
    roots.push_back("x1: " + to_string(root1 / (2 * a)));
    float root2 = -b - sqrt(pow(b, 2) - (4 * a * c));
    roots.push_back("x2: " + to_string(root2 / (2 * a)));
    return roots;
}

int main() {

    vector<string> result = calcHypotenuse(5, 10, 3);
    for(auto root: result) {
        cout << root << endl;
    }    
    return 0;
}