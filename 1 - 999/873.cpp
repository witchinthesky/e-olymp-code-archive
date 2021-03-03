
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    long long dp[n][n];
    
    memset(dp,0,sizeof(dp));
    for(int i = 0; i < n; i++) 
            dp[i][i] = 1;
    
    for(int len = 1; len < n; len++){
        int j;
        for(int i = 0; i + len < n; i++){
            j = i + len;
            if (s[i] == s[j])
                dp[i][j] = dp[i+1][j] + dp[i][j-1] + 1;
            else
                dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1];
        }
    }
    cout << dp[0][n-1];
 
}
