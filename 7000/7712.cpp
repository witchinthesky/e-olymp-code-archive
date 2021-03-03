
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, res = INT_MAX;
    cin >> n;
    vector <int> v;
    while(n--){
        cin >> a;
        v.push_back(a);
    }
    
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            res = min(res, v[j] - v[i]);
          //  cout << res << "\n";
        }
    }
    cout << ((res < 0) ? "no\n" : "yes\n");
}
