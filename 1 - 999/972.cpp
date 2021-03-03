
#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<tuple<int,int,int>> v; 
   int x, y, z, n;
   cin >> n;
   for(int i = 0; i < n; i++){
       cin >> x >> y >> z;
       v.push_back(make_tuple(x, y, z));
   }
   sort(v.begin(), v.end());
   for(int i = 0; i < n; i++){
       cout << get<0>(v[i]) << " " << get<1>(v[i])<< " " << get<2>(v[i]) << "\n";
   }
}
