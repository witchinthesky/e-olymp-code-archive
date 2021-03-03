#include <bits/stdc++.h>
using namespace std;

int main() {

    int f1 = 0, f2 = 1, n;
    cin >> n;
        for(int i = 0; i < n; i++){
            f1+=f2;
            swap(f1, f2);
        }
    cout << f1;
}