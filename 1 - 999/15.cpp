#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int m, n;
    cin >> n >> m;
    vector <vector<long long>> dp(n, vector<long long>(m));
    for (int i= n-1; i >= 0; i--){
        for (int j=0; j<m; j++)
            cin>> dp[i][j];
    }
    for(int i = 1; i < n; i++)
    dp[i][0] = dp[i][0] + dp[i-1][0];
    
    for(int j = 1; j < m; j++)
        dp[0][j] = dp[0][j] + dp[0][j-1];
        
    for (int i = 1; i < n; i++){
        for (int j = 1; j < m; j++) 
            dp[i][j] = dp[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
    }
    
    int i = n-1, j = m-1;
    string res = "";
    while (i + j > 0){
        if (i > 0 && j > 0){
            if (dp[i-1][j] > dp[i][j-1]){
                res+='F';
                i--;
            }
            else{
                res+='R';
                j--;    
            } 
        }
        else if (i == 0){
            res+='R';
            j--;
        }
        else if (j == 0){
            res+='F';
            i--;
        }
    }
    reverse(res.begin(), res.end());
    cout << res;

}
