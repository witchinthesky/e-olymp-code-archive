#include <iostream>
using namespace std;
 
int main() {
    int a;
    while (cin >> a && a != 0) {
        int L = 1; 
        while ((a & L) == 0){
            L = L << 1;
        }
        cout << L << endl;
    }
  
}
