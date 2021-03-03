#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int t=(n+1)/2, a=t, b=t;
  for (int i=1; i<=t; i++)
  {
      a=t-(i-1);
      b=t+i-1;
      for ( int j=1; j<=n; j++)
      {
          if (j>=a && j<=b) cout << '*';
          else cout << ' ';
      }
      cout << endl;
  }
  a=1;
  b=n;
  for (int i=t++; i<=n; i++)
  {
      a++;
      b--;
      for ( int j=1; j<=n; j++)
      {
          if (j>=a && j<=b) cout << '*';
          else cout << ' ';
      }
      cout << endl;
  }
}
