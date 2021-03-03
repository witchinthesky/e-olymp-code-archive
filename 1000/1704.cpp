#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector <vector<long long>> v(m, vector<long long> (n, 1));
    for(int i = 1; i < m; i++)
        for(int j = 1; j < n; j++){
            v[i][j] = v[i - 1][j] + v[i][j - 1];
        }
    cout << v[m - 1][n - 1];
}
