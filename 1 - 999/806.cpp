#include <bits/stdc++.h>

using namespace std;
long long sq(long long a){ 
    return a * a;
}

int main()
{
   int n;
   cin >> n;
   long long dp[n + 1], a[n + 1];
   for(int i = 1; i <= n; i++)
       cin >> a[i];

    dp[1] = 0;
    if (n == 2)
        dp[2] = sq(a[2] - a[1]);
    else
    dp[2] = min(sq(a[1] - a[2]), 3 * sq(a[1] - a[3]) + sq(a[2] - a[3]));
    for(int i = 3; i <= n; i++){
        dp[i] = min(dp[i - 1] + sq(a[i - 1] - a[i]),
                    dp[i - 2] + 3 * sq(a[i - 2] - a[i]));
        if (i < n) dp[i] = min(dp[i],
            dp[i - 1] + 3 * sq(a[i - 1] - a[i + 1]) + sq(a[i] - a[i + 1]));
}
   cout << dp[n];
}
