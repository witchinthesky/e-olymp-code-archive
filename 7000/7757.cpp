#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, size, count;
    cin >> n;
    int dp[n + 1][n + 1];
    memset(dp,0,sizeof(dp));
    size = count = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
            bool a;
            cin >> a;
            if (a){
                dp[i][j] = min(min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1]) + 1;
                if (dp[i][j] == size) count++;
                if (dp[i][j] > size){
                    size = dp[i][j]; 
                    count = 1;
                }
            }
        }

cout << count * size;

}
