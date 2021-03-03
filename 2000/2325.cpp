#include <bits/stdc++.h>

using namespace std;

int main()
{
  
       string a, b;
       cin >> a >> b;
       a+=b;
       sort(a.begin(), a.end(), [](char a, char b){ return a > b;});
       cout << a;
    
}
