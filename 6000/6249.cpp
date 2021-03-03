#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; ll res = 0;
    cin >> n;
    vector <ll> trees(n);
    for(int i = 0; i < n; i++){
        cin >> trees[i];
    }
    sort(trees.begin(), trees.end(), [](ll a, ll b){
        return a > b;
    });
    for(int i = 0; i < n; i++){
        res = max(res, trees[i] + i + 1);
    }
    cout << res + 1;
}
// Created by May 12.05.2020 at 10:20
