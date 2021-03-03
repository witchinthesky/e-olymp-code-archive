#include <bits/stdc++.h>

using namespace std;

int main()
{
  
       string a;
       cin >> a;
       sort(a.begin(), a.end());
       int x = atoi(a.c_str());
       reverse(a.begin(), a.end());
       x += atoi(a.c_str());
       cout << x;
}
