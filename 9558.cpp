#include <bits/stdc++.h>
using namespace std;

#define M 1000000007

int main() {

    long long n, f1 = 1, f2 = 1;
    cin >> n;
    for(int i = 1; i < n; i++){
        f1 = (f1 + f2) % M;
        swap(f1, f2);
    }
    f1 = (f1 * 2)%M;
    cout << f1;
}