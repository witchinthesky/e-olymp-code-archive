#include <bits/stdc++.h>
using namespace std;


int main() {
    
    string line;
    while(cin >> line){
        line = "." + line;
        int n = line.size();
        vector<double> dp(n + 2);
        dp[0] = 0;
        for(int i = 1; i < n; i++){
            dp[i] = 2000000000;
            if (line[i] == '.') dp[i] = dp[i - 1];
            else {
                for(int j = 0; j < i; j++){
                    dp[i] = min(dp[i], dp[j] + sqrt(i - j));
                }
            }
        }
        cout << fixed << setprecision(4) << dp[n - 1] << "\n";
    }
}