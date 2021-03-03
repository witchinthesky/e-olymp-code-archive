#include <bits/stdc++.h>

using namespace std;
#define M pair<int, int>
int root(int y){
    int res = 0;
    while(y){
        res+=y%10;
        y/=10;
    }
    if (res%10 == res) return res;
    return root(res);
}

bool comp(M a, M b){
    if (a.second == b.second) 
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
  vector<M> v;
  int x;
  while(cin >> x){
      v.push_back(make_pair(x, root(x)));
  }
  sort(v.begin(), v.end(), comp);
  for(auto i : v){
      cout << i.first << ' ' ;
  }
}

