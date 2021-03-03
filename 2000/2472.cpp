#include <bits/stdc++.h>

using namespace std;
#define M 100000

vector <vector<int>> graf(M);
void AddEdge(int u, int v) {
    graf[u].push_back(v);
    graf[v].push_back(u);
}
void Vertex(int u){
    if(graf[u].empty())
    cout << '\n';
    else {
        for(int i = 0; i < graf[u].size(); i++){
            cout << graf[u][i] << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    int n, t;
    cin >> n >> t;
    for(int i = 0; i < t; i++){
        char h;
        cin >> h;
        if (h == '1')
        {
            int x, y;
            cin >> x >> y;
            AddEdge(x, y);
        }
        else if (h == '2'){
            int x;
            cin >> x;
            Vertex(x);
        }
    }
    
}
