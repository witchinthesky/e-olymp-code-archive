#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector <int> fibo (n + 1);
    fibo[1] = fibo[0] = 1;
    fibo[2] = 2;
    for(int i = 3; i <= n; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    
    cout << ((n == 1) ? 2 : fibo[n] + fibo[n - 2]);
    
}