#include <bits/stdc++.h>

using namespace std;

struct omg{
    long long x, 
    y, 
    num;
};

bool comp(omg a, omg b){
    if (a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
}

int main()
{
    int n;
    cin >> n;
    vector<omg> v(n);
    for(int i = 0; i < n; i++){
        long long x, y;
        cin >> x >> y;
        v[i].x = x;
        v[i].y = y;
        v[i].num = i + 1;
    }
    sort(v.begin(), v.end(), comp);
    for(auto i : v){
        cout << i.num << ' ';
    }
}

