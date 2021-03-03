#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct act{
    ll begin;
    ll end;
};
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    vector <act> v;
    for(int i = 0; i < n; i++){
        act x; int h, m;
        cin >> h >> m;
        x.begin = h * 60 + m;
        cin >> h >> m;
        x.end = x.begin + h * 60 + m;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), [](act a, act b){
        return a.end < b.end;
    });
    int start = v[0].end, count = 1;
    for(int i = 1; i < n; i++){
        if (start < v[i].begin){
            count++;
            start = v[i].end;
        }
    }
    cout << count;
}
// Created by May 12.05.2020 at 10:20
