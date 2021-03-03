#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=0;
    for (int i=1; i*i<=n; i++)
        if (i*i==n) m=i;
    if (m==0) cout << "No";
    else cout << m;
}
