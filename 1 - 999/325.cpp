//
// Created by www on 22/11/2020.
//

#include <bits/stdc++.h>

using namespace std;

struct edge{
    int x, y, danger;
};

int repr(int n, vector<int> &parent){
    if (n == parent[n]) return n;
    return parent[n] = repr(parent[n], parent);
}


int union__(int x, int y, vector<int> &parent){
    int x1 = repr(x, parent), y1 = repr(y, parent);
    parent[x1] = y1;
    return x1 != y1;
}

int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<int> parent(n + 1);
    vector<edge> e(m);

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (int i = 0; i < m; i++) {
        cin >> e[i].x >> e[i].y >> e[i].danger;

    }

    sort(e.begin(), e.end(), [](edge a, edge b){
        return a.danger < b.danger;
    });

    for ( int i = 0; i < m; i++){

        union__(e[i].x, e[i].y, parent);

        if (repr(1, parent) == repr(n, parent)) {
            cout << e[i].danger << endl;
            break;
        }
    }
}