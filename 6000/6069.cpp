#include <bits/stdc++.h>

using namespace std;

struct brendon{
    double ratio;
    int begin, end;
};

bool comp(brendon a, brendon b){
    return a.ratio < b.ratio;
}
#define F fixed << setprecision(2) 
int main()
{
   vector <int> v(10);
   for(int i = 0; i < 10; i++)
   cin >> v[i];
   vector <brendon> b;
   for(int i = 0; i < 3; i++){
       for(int j = 3; j < 10; j++){
           brendon u;
           u.begin = i + 1;
           u.end = j - 2; 
           u.ratio = 1.0 * v[i] / v[j];
           b.push_back(u);
       }
   }
   sort(b.begin(), b.end(), comp);
   for(auto i : b){
       cout << F << i.ratio << ' ' << i.begin << ' ' << i.end << '\n';
   }
}

