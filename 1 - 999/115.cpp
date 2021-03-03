#include <bits/stdc++.h>
using namespace std;



int main() {
    int n, f1 = 2, f2 = 4;
    cin >> n;
    for(int i = 1; i < n; i++){
        f1+=f2;
        swap(f1, f2);
    }
    cout << f1;
}