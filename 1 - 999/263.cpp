#include <bits/stdc++.h>

using namespace std;

#define M 12345

int main()
{
    int n;
    cin >> n;
    vector <int> res(n + 1);
    res[1] = 2;
    res[2] = 4;
    res[3] = 7;
    for(int i = 4; i <= n; ++i){
        res[i] = (res[i - 1] + res[i - 2] + res[i - 3])%M;
    }
    cout << res[n];
}
