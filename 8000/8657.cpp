#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
  vector<int> v;
  for(int i = 0; i < 4; i++){
      int buf;
      cin >> buf;
      v.push_back(buf);
  }
  for(int i = 0; i < 4; i++){
      int it = i;
      for(int j = i + 1; j < 4; j++){
          if (v[it] > v[j])
              it = j;
      }
      swap(v[i], v[it]);
  }
  cout << v[2] - v[1];
}
