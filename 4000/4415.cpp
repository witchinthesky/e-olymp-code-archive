#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

bool comp(ii a, ii b){
    return a.first > b.first;
}
int main()
{
    int people, n;
    cin >> people >> n;
    vector <ii> v(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i] = make_pair(x, i + 1);
    }
    sort(v.begin(), v.end(), comp);
    vector <int> used;
    for(int i = 0; i < n; i++){
        people-=v[i].first;
        used.push_back(v[i].second);
        if (people <= 0) break;
    }
    if (people > 0) {
        cout << -1;
        return 0;
    }
    sort(used.begin(), used.end());
    cout << used.size() << '\n';
    for(auto x : used){
        cout << x << ' ';
    }
}
