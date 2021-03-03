#include <bits/stdc++.h>
using namespace std;

#define MAX 1010

string s;
int dp[MAX][MAX];
int pal[MAX][MAX];

int IsPal(int i, int j){
    if (i >= j) return pal[i][j] = 1;
    if (pal[i][j] != -1) return pal[i][j];
    return pal[i][j] = (s[i] == s[j]) && IsPal(i+1,j-1);
}

int main(){
        cin >> s;
        int n = s.size();
        memset(dp, 0, sizeof(dp));
        memset(pal, -1, sizeof(pal));

        for (int len = 1; len < n; len++){
            for (int i = 0; i + len < n; i++) {
                int j = i + len;
                if (IsPal(i, j)) {
                    dp[i][j] = 1;
                    continue;
                }
                for (int k = i + 1; k < j - 1; k++)
                    if (dp[i][k] && dp[k + 1][j]) {
                        dp[i][j] = 1;
                        break;
                    }
            }
        }

        int res = 0;
        for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
        res += dp[i][j];
        cout << res;
}
