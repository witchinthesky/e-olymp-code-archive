#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll res = 0, n;
    cin >> n;
    multiset<ll> num;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        num.insert(x);
    }
    while(num.size() > 1){
        ll a = *num.begin();
        num.erase(num.begin());
        ll b = *num.begin();
        num.erase(num.begin());
        num.insert(a + b);
        res += a + b;
    }
    cout << res;
}
// Created by May 12.05.2020 at 10:20
