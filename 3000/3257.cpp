#include <bits/stdc++.h>

using namespace std;

#define M 1000000007
#define MAX 1001
typedef long long ll;

int main()
{
    int ex, ey;
    cin >> ex >> ey;
    vector < vector <ll> > dp(ex + 1, vector <ll> (ey + 1, 0));
    for(int x = 0; x <= ex; x++){
        for(int y = 0; y <= ey; y++){
            if (x >= y && (x * y)%2 == 0){
                if (x == 0 && y == 0){
                    continue;
                }
                else if (x == 0){
                    dp[x][y] = 1;
                }
                else if (y == 0){
                    dp[x][y] = 1;
                }
                else {
                    dp[x][y] = (dp[x - 1][y] + dp[x][y - 1]) % M;
                }
            }
        }
    }
    cout << dp[ex][ey];
}
