//
// Created by witchinthesky on 22/11/2020.
//
#include <bits/stdc++.h>


using namespace std;

int repr(int u, vector<int> &parent){
    if(0 == parent[u]) return u;
    //  printf("u: %d, parent[u]= %d\n", u, parent[u]);
    return parent[u] = repr(parent[u], parent);
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, a;
    cin >> n;
    vector<int>parent(n + 1, -1);
    for(int i = 1; i <= n; i++){
        cin >> a;
        parent[i] = a;
    }
    for(int i = 1; i <= n; i++){
        a = repr(i, parent);
        cout << (a == i ? 0 : a) << endl;
    }
}