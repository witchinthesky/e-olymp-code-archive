//
// Created by www on 22/11/2020.
//
#include <bits/stdc++.h>

using namespace std;

int repr(int x, vector<int> &pre){
    if (pre[x] == x) return x;
    return pre[x] = repr(pre[x], pre);
}

void union__(int x, int y, vector<int> &pre){
    int fx = repr(x, pre), fy = repr(y, pre);
    if (fx != fy){
        if (fx > fy) pre[fx] = fy;
        else pre[fy] = fx;
    }
}

int main()
{
    int n, i, n1, n2, x, y;
    char s;
    while (cin >> n){
        n1 = 0, n2 = 0;
        vector<int> pre(n * 2 + 1), id(n * 2 + 1);
        for (i = 1; i <= n; i++){
            pre[i] = i;
            id[i] = i;
        }
        while (cin >> s){
            if (s == 'e') break;
            switch(s){
                case 'c': {
                    cin >> x >> y;
                    union__(id[x], id[y], pre);
                    break;
                }
                case 'd': {
                    cin >> x;
                    id[x] = ++n;
                    pre[n] = n;
                    break;
                }
                case 'q': {
                    cin >> x >> y;
                    if (repr(id[x], pre) == repr(id[y], pre)) n1++;
                    else n2++;
                    break;
                }
            }
        }
        printf("%d , %d\n", n1, n2);
    }
}
