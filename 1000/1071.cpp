//
// Created by May on 02.05.2020.
//
#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

int m[MAX];

int main() {
    int n, s, i;
    cin >> n;

    for (i = 0; i < n; i++)
        cin >> m[i];
    sort(m, m + n);

    for (s = i = 0; i < n; i++) {
        if (m[i] > s + 1) break;
        s += m[i];
    }
    cout << s + 1;
}