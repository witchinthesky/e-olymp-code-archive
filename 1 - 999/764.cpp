#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int m, n, a, b, k, ans = 0;
    cin >> m >> n >> a >> b >> k;
    int arr[m + 2][n + 2];
    memset(arr,0,sizeof(arr));
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        arr[x][y] = 1;
    }
    
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            arr[i][j] = arr[i][j] + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1];
            
    for(int i = 1; i <= m - a + 1; i++)
        for(int j = 1; j <= n - b + 1; j++)
            if (arr[i+a-1][j+b-1] + arr[i-1][j-1] - arr[i-1][j+b-1] - arr[i+a-1][j-1] == 0) ans++;
    
    cout << ans;

}
