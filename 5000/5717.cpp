#include <iostream>
#include <vector>
#define MAX 101
using namespace std;

int main() {
       int n;
       cin >> n;
       vector <int> v (MAX);
       for (int i = 0; i < n; i++){
           int x;
           cin >> x;
           v[x]++;
       }
       int max = 0, it = 0;
       for(int i = 0; i < MAX; i++){
           if (v[i] > max){
               max = v[i];
               it = i;
           }
       }
       cout << it;
}
