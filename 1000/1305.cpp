#include <bits/stdc++.h>

using namespace std;
bool comp(string a, string b){
   return a + b > b + a;
} 
int main()
{
    int n; 
    while(cin >> n && n != 0){
    vector<string> v;
    for(int i = 1; i <= n; i++){
        string a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), comp);
    for(auto i : v){
        cout << i;
    }
    cout << '\n';
    }
}
