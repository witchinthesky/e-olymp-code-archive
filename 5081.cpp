#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define M 1000000007


int main() {
    ll n, k; cin >> n >> k;
    vector <ll> res(max(n, k) + 2);
    res[0] = 1;
    res[1] = 2;
    for(ll i = 2; i < k; ++i){
        res[i] = (res[i - 1] * 2) % M;
    }
    for(ll i = 0; i < k; ++i){
            res[k] = (res[k] + res[i]) % M;
    }
    for(ll i = k + 1; i <= n; ++i){
            res[i] = (2 * res[i - 1])%M;
            res[i] = (res[i] - res[i - 1 - k])%M;
    }
    cout << res[n];
}