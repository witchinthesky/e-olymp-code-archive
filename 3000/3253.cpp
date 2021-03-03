#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    while(cin >> s >> t){
    int n = s.size(), m = t.size(), res = 0;
    s = '@' + s;
    t = '@' + t;
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    int mark = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s[i] == t[j]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
            if (dp[i][j] > mark){
                res += j - 1;
                mark = dp[i][j];
            }
        }
    }
    if(dp[n][m] >= n){
        cout << "YES\n" << res;
    }
    else 
        cout << "NO";
    }
}
