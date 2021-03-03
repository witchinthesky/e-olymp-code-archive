#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
   short a, b;
   long long res = 0;
   cin >> a >> b;
   for(a; a <= b; a++){
       res += a * a;
   }
    cout << res;
}
