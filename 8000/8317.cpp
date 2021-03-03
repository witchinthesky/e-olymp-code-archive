#include <bits/stdc++.h>

using namespace std;
 
int main()
{
   string a;
   cin >> a;
   sort(a.begin(), a.end());      
   int min = atoi(a.c_str());
   reverse(a.begin(), a.end());   
   int max = atoi(a.c_str());
   long long res = max - min;
   res *=res;
   cout << res;
}
