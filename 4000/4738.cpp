#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

void sorti(vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] < key){
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

int main() {
        int n;
        cin >> n;
        vector <int> v;
      for (int i = 0; i < n; i++) {
          int buff;
          cin >> buff;
          v.push_back(buff);
      }
      sorti(v);
      for(auto i : v)
          cout << i << ' ';
}
