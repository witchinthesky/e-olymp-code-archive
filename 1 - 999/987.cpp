#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define M 1000000007


int main() {
    int n;
    cin >> n;
    vector <int> v(n), dp(n + 2);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    dp[2] = v[1] - v[0];
    dp[3] = v[2] - v[0];
    for(int i = 4; i <= n; i++){
        dp[i] = min(dp[i-1], dp[i-2]) + v[i - 1] - v[i - 2];
    }
    cout << dp[n];
}