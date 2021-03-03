#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, i; cin >> n;
  for (i = n+1; i % 10 != 0; i++);
  cout << i;
}
