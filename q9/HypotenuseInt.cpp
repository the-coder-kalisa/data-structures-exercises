#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // main function
    vector<vector<string>> hyptenues;
    for(int i = 2; i < 100; i++) {

        // loop to get numbers less than 100
        for (int j = 2; j < 100; j++) {

            // loop to get numbers les than 100
            float hypoteneuse = sqrt(pow(i, 2) + pow(j, 2));
            int hyp = hypoteneuse;
            if (hyp == hypoteneuse) {

                // condition to check if float hypotenuese is equal to int hypotenues (to check if it is interger I mean result)
            vector<string> hypf = {to_string(j) + ",", to_string(i)}; // convert each interger to string and concat , to first element
            if(!std::count(hyptenues.begin(), hyptenues.end(), hypf)){

            // condition to check if for example (3, 4) // (4, 3) must not be included
            vector<string> hyptenuess;
            hyptenuess.push_back(to_string(i) + ","); // add elements
            hyptenuess.push_back(to_string(j));
            hyptenues.push_back(hyptenuess);
            }
            }
        }
    }
    for(auto hyp: hyptenues){
        
        // loop inside all hyptenues got
        cout << "(";
        for(auto hypo: hyp) {

            // print each pair
            cout << hypo;
        }

        cout << ")" << endl;
    }
    return 0;
}