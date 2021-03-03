#include <bits/stdc++.h>

using namespace std;

#define M 1000000007
#define MAX 1001
typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    vector < vector <ll> > dp(n, vector <ll> (m, 0));
    dp[0][0] = 1;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if (j - 2 >= 0){
                dp[i][j] += dp[i - 1][j - 2];
            }
            if (i - 2 >= 0){
                dp[i][j] +=dp[i - 2][j - 1];
            }
        }
    }
    cout << dp[n - 1][m - 1];
}
