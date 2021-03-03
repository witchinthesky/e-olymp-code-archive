#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> res(n + 2);
    res[1] = 1;
    for(int i = 2; i <= n; ++i){
        res[i] = i;
        for(int j = 1; 2 * j < i; ++j){
            res[i] = min(res[i], res[j] + res[i-j]);
        }
        for(int j = 2; j * j <= i; ++j){
            if (i%j == 0)
            res[i] = min(res[i], res[j] + res[i/j]);
        }
    }
    cout << res[n];
}
