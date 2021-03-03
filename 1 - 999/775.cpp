#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, m, k;
    cin >> k >> n >> m;
    n = m*n, m = 0; 
    vector<int> v(k);
    for(int i = 0; i < k; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), [](int x, int y) {return x > y;} );
    k = 0;
    for(int i = 0; m < n; i++)
    {
            k++;
            m+=v[i];
    }
    cout << k;
}

