#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector <ll> res(n + 3);
    res[1] = 2;
    res[2] = 4;
    res[3] = 7;
    for(int i = 4; i <= n; ++i){
        res[i] = res[i - 1] + res[i - 2] + res[i - 3];
    }
    cout << res[n];
}