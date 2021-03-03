#include <bits/stdc++.h>
using namespace std;


int vert = 0;
vector <bool> used(101);
vector <vector<bool>> graf(101, vector<bool> (101));

void dfs(int n, int v){
    int start = v; 
    used[start] = true; 
    for(int i = 0; i < n; i++) {
        if (graf[start][i] && !used[i]) dfs(n, i);
    }
}

int main() {

    int n, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){       
        for (int j = 0; j < n; j++){
            bool x;
            cin >> x;
            if (x) graf[i][j] = 1;
        }
    }
    
    for (int i = 0; i < n; i++){
        if (!used[i]){
            dfs(n, i); count++;
        }
    }
    cout << count;
}