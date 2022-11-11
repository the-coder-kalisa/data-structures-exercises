#include <iostream>
#include <vector>

using namespace std;


int main() {
   int intergers[] {1,2,3, 4, 7, 8, 9,3, 32, 10,4, 78, };
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