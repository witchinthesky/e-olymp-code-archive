#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool comp (ll a, ll b){
    return a > b;
}
int main()
{
    vector <ll> first, second;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x%2 == 0) second.push_back(x);
        else first.push_back(x);
    }
    sort(first.begin(), first.end());
    sort(second.begin(), second.end(), comp);
    for(int i = 0; i < first.size(); i++){
        cout << first[i] << ' ';
    }
    for(int i = 0; i < second.size(); i++){
        cout << second[i] << ' ';
    }
}
