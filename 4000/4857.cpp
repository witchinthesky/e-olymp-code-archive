//
// Created by May on 06.05.2020.
//
#include <bits/stdc++.h>

using namespace std;

int main() {

    int g, s, c, p, m, answ;
    cin >> g >> s >> c >> p >> m;
    answ = max((g + m - 1)/m, max((s + m - 1)/m, max((c + m - 1)/m, (p + m - 1)/m)));
    cout << answ;
}
