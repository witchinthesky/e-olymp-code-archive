//
// Created by May on 02.05.2020.
//

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int k = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            string temp = s.substr(i, j), rtemp = temp;
            reverse(rtemp.begin(), rtemp.end());
            if(temp == rtemp)
                k++;
        }
    }
    cout << k;
}