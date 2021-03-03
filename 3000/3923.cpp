
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        int a;
        vector <int> v;
        while(n--){
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        v.push_back(-9);
        int max = 1, bigmax = 0, u;
        bool markus = false;
        for(int i = 1; i < v.size(); i++){
            if (v[i] == v[i-1]){
                max++; 
            }
            else {
                if (max > bigmax){
                    bigmax = max; markus = 0;
                    u = v[i-1];
                }
                else if (max == bigmax){
                    markus = true;
                }
                max = 1;
            }
        }
        if (markus) cout << "0\n";
        else cout << u << "\n";
    }
}
