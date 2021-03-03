#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int test, limit, acts;
    cin >> test;
    while(test--){
        ll result = 0;
        cin >> limit >> acts;
        vector <ll> price(acts);
        for(int i = 0; i < acts; i++){
            cin >> price[i];
        }
        sort(price.begin(), price.end(), [](ll a, ll b){
            return a > b;
        });
        for(int i = 0; i < min(limit, acts); i++){
            result+=price[i];
        }
        cout << result << '\n';
    }
}

// Created by May 12.05.2020 at 09:18
