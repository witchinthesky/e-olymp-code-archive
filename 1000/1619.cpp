#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define M 1000000007


int main() {
    int n;
    cin >> n;
    ll houses[n + 2];
    houses[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> houses[i];
    }
    ll dp[n];
    dp[0] = 0;
    dp[1] = houses[1];
    for(int i = 2; i <= n; i++){
        dp[i] = max(dp[i - 1], dp[i - 2] + houses[i]);
    }
    cout << dp[n];
    
}