#include <iostream>

using namespace std;
const int a = 16;
int main() {
   int N; cin >> N;
   for (int i=0; i<N; ++i){
       int L, W, H;
       cin >> L >> W >> H;
       int res = (2 * H * (L + W));
       res = (res + a - 1)/a;
       cout << res << endl;
   }

}
