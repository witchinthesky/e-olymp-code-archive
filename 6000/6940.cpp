#include <iostream>
#include <map>

using namespace std;

int main()
{
   int n;
   cin >> n;
   map<string, int> m;
   for(int i = 0; i < n; i++){
    string buff;
    cin >> buff;
    m[buff]++;
   }
   auto iter = m.begin();
   int max = 0;
   for(auto i = m.begin(); i!=m.end(); i++){

    if (i->second >=max){
        max = i->second;
        iter = i;
    }
   }
   cout << iter->first << ' ' << max;
}
