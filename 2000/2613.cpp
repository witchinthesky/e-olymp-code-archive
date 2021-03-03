#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MAX 502



int main(){
    int n, max = 0;
    cin >> n;
    int table[n + 1][n + 1];
    memset(table,0,sizeof(table));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> table[i][j];
            
    for (int j = 1; j <= n; j++)
        for (int i = 1; i <= n; i++)
            table[i][j] = table[i - 1][j] + table[i][j];
    
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++){
            int buff = 0;
            for (int k = 1; k <= n; k++){
                buff += table[j][k] - table[i-1][k];
                if (buff < 0) buff = 0;
                if (buff > max) max = buff;
        }
    }
    
    cout << max;

}