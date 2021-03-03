#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   int dp[n + 1], value[n + 1];
   for(int i = 0; i < n; i++){
       cin >> value[i];
   }
   dp[0] = 0;
   dp[1] = abs(value[1] - value[0]);
   for(int i = 2; i < n; i++){
       dp[i] = min(dp[i - 1] + abs(value[i - 1] - value[i]), dp[i - 2] + abs(value[i] - value[i - 2]));
   }
   cout << dp[n - 1];
}
