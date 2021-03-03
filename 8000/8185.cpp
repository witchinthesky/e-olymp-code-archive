#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, sum = 0;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    sum = v[0] + v[n - 1];
    for(int i = 0; i < n/2; i++){
        sum = min(v[i] + v[n - 1 - i], sum);
    }
    cout << sum;
}
// Created by May 12.05.2020 at 10:20
