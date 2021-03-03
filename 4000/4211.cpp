#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, size, res;
    cin >> size >> n;
    vector <ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(),[](ll a, ll b){
        return a > b;
    } );
    res = size - v[0] + v[n - 1];
    for(int i = 1; i < n; i++){
        res = max(res, v[i - 1] - v[i]);
    }
    printf("%.1lf", res/2.0);
}
// Created by May 12.05.2020 at 10:20
