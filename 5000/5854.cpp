#include <bits/stdc++.h>

using namespace std;
#define INF -2000000000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    int arr[n + 2][m + 2];
    for(int i = 1; i <= n; i++){
        arr[i][0] = arr[i][m + 1] = INF;
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= m; j++){
            arr[i][j] += max(max(arr[i - 1][j - 1], arr[i - 1][j + 1]), arr[i - 1][j]);
        }
    }
    int res = INF;
    for(int i = 1; i <= m; i++){
        if(arr[n][i] > res) res = arr[n][i];
    }
    cout << res;
}
