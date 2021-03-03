#include <bits/stdc++.h>

using namespace std;

struct com{
    int problem, 
    team, 
    penalty;
};

bool comp(com a, com b){
    if (a.problem != b.problem)
        return a.problem > b.problem;
    if (a.penalty != b.penalty)
        return a.penalty < b.penalty;
    return a.team < b.team;
}

int main()
{
   int n;
   cin >> n;
   vector <com> v(n);
   for(int i = 0; i < n; i++){
       v[i].team = i + 1;
       int x, y;
       cin >> x >> y;
       v[i].problem = x;
       v[i].penalty = y;
   }
   sort(v.begin(), v.end(), comp);
   for(auto i : v){
       cout << i.team << ' ';
   }
}

