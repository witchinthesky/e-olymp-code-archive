#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int x, k = 1, i = 0;
    cin >> x;
    string y;
    while(i < x){
       for (int l = k; l; --l){
           cout << k << ' ';
           ++i;
           if (i >= x) break;
        }
       ++k;
    }

}
