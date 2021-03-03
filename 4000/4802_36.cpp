//
// Created by May on 02.05.2020.
//
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    string smin = v[0], res = "";
    int len = v[0].size();
    for(int i = 0; i < len; i++){
        for (int j = i + 1; j <= len; j++)
        {
            string stem = smin.substr(i, j);
            int k = 0;

            for(string s : v){
                if (s.find(stem.c_str()) == -1)
                    break;
                    k++;
            }

            if (k == n && res.size() < stem.size())
                res = stem;
           // cout << stem << ' ' << k << ' ' << res << '\n';
        }
    }
    cout << res;
}