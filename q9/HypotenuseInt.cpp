#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<string>> hyptenues;
    for(int i = 2; i < 100; i++) {
        for (int j = 2; j < 100; j++) {
            float hypoteneuse = sqrt(pow(i, 2) + pow(j, 2));
            int hyp = hypoteneuse;
            if (hyp == hypoteneuse) {
            vector<string> hypf = {to_string(j) + ",", to_string(i)};
            if(!std::count(hyptenues.begin(), hyptenues.end(), hypf)){

            vector<string> hyptenuess;
            hyptenuess.push_back(to_string(i) + ",");
            hyptenuess.push_back(to_string(j));
            hyptenues.push_back(hyptenuess);
            }
            }
        }
    }
    for(auto hyp: hyptenues){
        cout << "(";
        for(auto hypo: hyp) {
            cout << hypo;
        }
        cout << ")" << endl;
    }
    return 0;
}