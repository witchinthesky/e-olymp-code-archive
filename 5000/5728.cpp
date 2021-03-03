#include <iostream>
#include <map>
#define MAX 101
using namespace std;

int main() {
       int n;
       cin >> n;
       map <int, int> unic;
       for(int i = 0; i < n; i++){
           int c;
           cin >> c;
           unic[c]++;
       }
       int sum = 0;
       for(auto i : unic){
           sum+=i.first;
       }
       sum/=unic.size();
       auto max = unic.begin();
       for (auto i = unic.begin(); i != unic.end(); i++){
           if (i->second > max->second){
               max = i;
           }
           else if (i->second == max->second){
               max = ((abs(i->first - sum) < abs(max->first - sum)) ? i : max);
           }
       }
       cout << max->first;
}
