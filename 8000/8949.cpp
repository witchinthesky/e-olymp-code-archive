#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;
 int a=n/2+1, b=0;
 for (int i=1; i<=n; i++){
    for (int j=1; j<=n; j++){
            if (j==a) cout << "*";
            else if (j>b && j<=n-b) cout << "*";
            else cout << " ";
    }
    if (i<a) b++; else b--;
    cout << endl;
 }
}
