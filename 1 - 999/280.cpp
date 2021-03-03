#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    if (n == 1 || m == 1) cout << 1 << endl;
    else cout << __gcd(n, m) << endl;
}
