#include <iostream>

using namespace std;

int main() {
   int N; cin >> N;
   for (int i=0; i<N; ++i){
       int a; cin >> a;
       char s1 = 'G', s2 = 'C', s3 = 'V';
       for (int j=0; j<a; ++j) {
           swap(s3, s2);
           swap(s1, s2);
       }
       cout << s1 << s2 << s3 << endl;
   }

}
