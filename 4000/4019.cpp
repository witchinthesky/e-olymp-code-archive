#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector <vector<long long>> v(m + 1, vector<long long> (n + 1, 0));
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cin >> v[i][j];
        }
    }
    vector <vector<long long>> dp(m + 1, vector<long long> (n + 1, 0));
    dp[1][1] = v[1][1];
    for(int i = 2; i <= m; i++){
        dp[i][1] = dp[i - 1][1] + v[i][1];
    }
    for(int i = 2; i <= n; i++){
        dp[1][i] = dp[1][i - 1] + v[1][i];
    }
    for(int i = 2; i <= m; i++)
        for(int j = 2; j <= n; j++){
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + v[i][j];
        }
    cout << dp[m][n];
    
    int i = m, j = n; 
    vector <pair<int, int>> way;
    while (i + j > 2){
            if (i > 1 && j > 1){
            way.push_back(make_pair(i, j));
            if (dp[i - 1][j] + v[i][j] == dp[i][j]) 
                i--; 
            else 
                j--;
            }
            else if (i > 1){
                way.push_back(make_pair(i, j));
                i--;
            }
            else if (j > 1){
                way.push_back(make_pair(i, j));
                j--;
            }
        
    }
    way.push_back(make_pair(1, 1));
    for (i = way.size() - 1; i >= 0; i--)
      cout << '\n' << way[i].first << ' ' << way[i].second;
    }
