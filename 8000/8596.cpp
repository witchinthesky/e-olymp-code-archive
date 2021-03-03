#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
    ll n, a, b, tired = 0;
    cin >> n >> a >> b;
    vector <ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 1; i < n; i++){
       tired += min((v[i] - v[i - 1]) * a, b);
    }
    cout << tired;
}