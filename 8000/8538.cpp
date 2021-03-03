#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, res = 0;
    cin >> n;
    while(n > 1){
        if (n % 3 == 0)
            n/=3;
        else n--;
        res++;
    }
    cout << res;
}
// Created by May 12.05.2020 at 10:20
