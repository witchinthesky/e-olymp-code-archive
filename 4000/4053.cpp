#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector <vector<long long>> v(m, vector<long long> (n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    vector <vector<long long>> dp(m, vector<long long> (n, 0));
    dp[0][0] = v[0][0];
    for(int i = 1; i < m; i++)
        for(int j = 1; j < n; j++){
            if (j - 2 >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 2]);
            if (i - 2 >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 2][j - 1]);
            if (dp[i][j] != 0) 
                dp[i][j] += v[i][j];
        }
    cout << ((dp[m - 1][n - 1] == 0) ? -1 : dp[m - 1][n - 1]);
}
