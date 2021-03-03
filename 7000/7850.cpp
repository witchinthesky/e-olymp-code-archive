#include <iostream>
#include <vector>
#include <map>

#define MAX 100001
using namespace std;

int main() {
       int n;
       cin >> n;
       vector <int> v(n);
       map <int, int> unic;
       for(int i = 0; i < n; i++)
       {
           cin >> v[i];
           unic[v[i]]++;
       }
       for(int i = 0; i < n; i++){
           if (unic[v[i]] == 1)
               cout << v[i] << ' ';
       }

}
