#include <bits/stdc++.h>
using namespace std;

int main() {

    int f1 = 2, f2 = 3, n;
    cin >> n;
        for(int i = 1; i < n; i++){
            f1+=f2;
            swap(f1, f2);
        }
    cout << f1;
}