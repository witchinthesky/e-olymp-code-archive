#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  map <int, int> v;
  for(int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      v[x]+=y;
  }
  auto it = v.begin();
  for(auto i = v.begin(); i != v.end(); i++){
      if (i->second > it->second){
          it = i;
      }

  }
  cout << it -> first;
}
