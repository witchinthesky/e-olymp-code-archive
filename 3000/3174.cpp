#include <bits/stdc++.h>

using namespace std;

#define M 1000003
#define MAX 1001
typedef long long ll;

int main()
{
    vector < vector <ll> > dp(MAX, vector <ll> (MAX, 1));
    for(int i = 1; i < MAX; i++){
        for(int j = 1; j < MAX; j++){
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j] + dp[i][j - 1])%M;
        }
    }
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << dp[n - 1][n - 1] << '\n';
    }
}
