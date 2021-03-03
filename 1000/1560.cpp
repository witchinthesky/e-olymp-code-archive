#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define M 1000000
int dp[M];

int main() {
   int n;
   dp[1] = 0;
   dp[2] = dp[3] = 1;
   for(int i = 4; i <= M; i++){
       if (i%3 == 0){
           dp[i] = min(dp[i - 1] + 1, dp[i/3] + 1);
       }
       else if (i%2 == 0){
           dp[i] = min(dp[i - 1] + 1, dp[i/2] + 1);
       }
       else {
           dp[i] = dp[i - 1] + 1;
       }
       
   }
   while(cin >> n){
       cout << dp[n] << "\n";
   }
}