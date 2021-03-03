#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    while(cin >> a >> b){
    int n = a.size(), m = b.size();
    a = '@' + a;
    b = '@' + b;
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i] == b[j]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[n][m] << '\n';
    }
}
