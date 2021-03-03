//
// Created by witchinthesky on 1/8/2021.
//


#include <bits/stdc++.h>
using namespace std;
#define MAX 2100000000

int n, s, f;

vector<vector<int>> g(100, vector<int>(100));
vector<char> used(100, '0');
vector<int> d(100, MAX);


int find_min(){

    int mini = MAX, v = -1;

    for(int i = 0; i < n; i++) {
        if (used[i] != '1' && mini > d[i])
            mini = d[i], v = i;
    }
    return v;

}


void relax(int v, int to){

    if (d[to] > d[v] + g[v][to]) d[to] = d[v] + g[v][to];
}

void Dijkstra(){

    d[s] = 0;

    for(int i = 1; i < n; i++){

        int v = find_min();

        if(v == -1)
            return;

        for(int to = 0; to < n; to++) {
            if (used[to] != '1' && g[v][to] != -1) relax(v, to);
        }

        used[v] = '1';
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    cin >> n >> s >> f;

    s--; f--;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }

    Dijkstra();
    cout << (d[f] == MAX ? -1 : d[f]);

}