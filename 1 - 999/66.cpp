#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct act{
    int begin;
    int end;
};
int parse(string a){
    for(int i = 0; i < a.size(); i++){
        a[i] -= 48;
    }
    int res = a[0] * 1000 + a[1] * 100 + a[3] * 10 + a[4];
    return res;
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector <act> v;
    for(int i = 0; i < n; i++){
        string a; act x;
        cin >> a;
        x.begin = parse(a);
        cin >> a;
        x.end = parse(a);
        v.push_back(x);
    }
    sort(v.begin(), v.end(), [](act a, act b){
        return a.end < b.end;
    });
    int start = v[0].end, count = 1;
    for(int i = 1; i < n; i++){

        if (start <= v[i].begin){
            count++;
            start = v[i].end;
        }
    }
    cout << count;
}
// Created by May 12.05.2020 at 10:20
