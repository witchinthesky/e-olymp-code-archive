#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, a, b;
    cin >> n >> a >> b;
    long long res = (n / 2 + n % 2) * max(a, b);
    res += (n/2) * min(a, b);
    cout << res;
}
// Created by May 12.05.2020 at 10:20
