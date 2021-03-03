
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string a, b;
   cin >> a >> b;
   vector <char> v1, v2;
   for(int i = 0; i < a.size(); i++){
       v1.push_back(a[i]);
   }
   for(int i = 0; i < b.size(); i++){
       v2.push_back(b[i]);
   }
   sort(v1.begin(), v1.end());
   sort(v2.begin(), v2.end());
   if (v1 == v2) cout << "YES\n";
   else cout << "NO\n";
}

