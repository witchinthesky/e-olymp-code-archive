//
// Created by www on 23/11/2020.
//

#include <bits/stdc++.h>

using namespace std;


struct edge{
    int p;
    bool u;
};

int repr(int x, vector<edge> &pre){
    if (pre[x].p == x) return x;
    return pre[x].p = repr(pre[x].p, pre);
}

bool union__(int x, int y, vector<edge> &pre){
    int fx = repr(x, pre), fy = repr(y, pre);
    if (pre[fx].u && pre[fy].u) return false;
    pre[fy].u |= ((fx == fy) || pre[fx].u);
    pre[fx].p = fy;
    return true;
}



int main()
{
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<edge> pre(n * 2 + 1);
        for(int i = 0; i <= n * 2; i++)
            pre[i].p = i, pre[i].u = false;
        int u, v;
        bool flag = true;
        for(int i = 0; i < n; i++){
            cin >> u >> v;
            flag &= union__(u, v, pre);
        }
        cout << (flag ? "possible" : "impossible") << "\n";
    }
}
