#include <iostream>
#include <vector>

using namespace std;

int main() {

   int intergers[] {0,1, 3, 2};
   int asc[(sizeof(intergers) / sizeof(intergers[0])) - 1];
    for(int i = 0; i < sizeof(intergers) / sizeof(intergers[0]); i++) {
         if (i - 1 != -1) {
            cout << i;
                if (intergers[i] > asc[i - 1]){
                    asc[i] = i;
                }
        }

        
    }
    for (auto interger: asc ) {
        cout << interger << " ";
    }
    return 0;
}