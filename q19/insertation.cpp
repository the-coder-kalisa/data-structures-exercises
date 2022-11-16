#include <iostream>
#include <vector>

using namespace std;


int main() {
   int intergers[] {-1,40,5,10,100, 30,9,5,8,-49, 2,7,7,60,101};
   int length = sizeof(intergers) / sizeof(intergers[0]);
   for(int i = 1; i < length; i++) {
    for(int j = i; j > 0; j--) {
        int cache = intergers[j - 1];
        if (intergers[j] < cache) {
            intergers[j - 1] = intergers[j];
            intergers[j] = cache;
        } else {
            break;
        }
    }
   }
   for(auto interger: intergers) {
    cout << interger << endl;
   }
   return 0;
}