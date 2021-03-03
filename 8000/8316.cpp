#include <bits/stdc++.h>

using namespace std;

int main()
{
    string v;
    cin >> v;
    sort(v.begin(), v.end());
    cout << v << '\n';
    reverse(v.begin(), v.end());
    cout << v;
}
