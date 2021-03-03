//
// Created by www on 22/11/2020.
//

#include <bits/stdc++.h>
using namespace std;

struct graph{
    int p, s, n;
};

int repr(int u, vector<graph> &g) {
    if (u == g[u].p) return u;
    return g[u].p = repr(g[u].p, g);
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, M;
    while (cin >> N >> M) {

        int Q, u, v;
        vector<graph> g(N * 2 + 2);
        for (int i = 0; i <= N; i++){
            g[i].p = g[i + N].p = i + N;
            g[i].s = g[i + N].s = i;
            g[i].n = g[i + N].n = 1;
        }

        while (M--){

            cin >> Q;
            switch(Q){
                case 1: {
                    cin >> u >> v;
                    int pU = repr(u, g), pV = repr(v, g);
                    if (pU == pV) break;
                    g[pU].p = pV;
                    g[pV].n += g[pU].n;
                    g[pV].s += g[pU].s;
                    break;
                }
                case 2: {
                    cin >> u >> v;
                    int pU = repr(u, g), pV = repr(v, g);
                    if (pU == pV) break;
                    g[u].p = pV;
                    g[pU].n--;
                    g[pV].n++;
                    g[pU].s -= u;
                    g[pV].s += u;
                    break;
                }
                case 3: {
                    cin >> u;
                    int pU = repr(u, g);
                    cout << g[pU].n << ' ' << g[pU].s << endl;
                    break;
                }
            }
        }
    }
}