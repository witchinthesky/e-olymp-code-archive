#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct box{
    ll m;
    ll s;
};



int main()
{
    int n;
    cin >> n;
    vector <box> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].m >> v[i].s;
    }
    sort(v.begin(), v.end(), [](box a, box b){
        return a.m + a.s < b.m + b.s;
    });
    auto cmp = [](box a, box b){
        return a.m > b.m;
    };
    multiset<box, decltype(cmp)> used(cmp);
    ll MAX = 0;
    for(box b : v){
        if (b.s >= MAX){
            MAX+=b.m; used.insert(b);
            
        }
        else {
            ll max = used.begin()->m;
            if(b.s >= MAX - max && b.m < max) {
                MAX -= max,  MAX += b.m;
                used.erase(used.begin());
                used.insert(b);
            }
        }
        
    }
    cout << used.size();
}
