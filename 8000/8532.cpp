#include <iostream>

using namespace std;

int main() {
   int a, b;
   cin >> a >> b;
   for (long long i=a; i<=b; i++){
       cout << i*i << ' ';
   }
   cout << endl;
    for (long long i=b; i>=a; i--){
        cout << i*i*i << ' ';
    }
}
