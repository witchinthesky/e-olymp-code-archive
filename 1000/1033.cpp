#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n; int res;
    cin >> m >> n;
    res = m + n - __gcd(m, n);
    cout << res;

}
