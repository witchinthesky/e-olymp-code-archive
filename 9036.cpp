#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define M 1000000007
#define MAX 7

int main() {
    int n;
    cin >> n; 
    int size = ((n < 7) ? 6 : n);
    vector<ll> res(size + 2); 
    res[1] = 1;
    for(int i = 2; i < MAX; i++){
        res[i] = res[i - 1] * 2;
    }
    if (n >= MAX)
    for (int i = MAX; i <= n; i++){
        for (int j = 1; j < MAX; j++) 
            res[i] = (res[i] + res[i-j]) % M;
    }
   
    cout << res[n];
}