#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int start = 0;
    for(int i = 0; i < k; i++){
        start += v[i];
    }
    vector <int> b;
    b.push_back(start);
    for(int i = 1; i - 1 + k < n; i++){
        b.push_back(b[i - 1] - v[i - 1] + v[i - 1 + k]);
    }
    for(int i = 0; i < b.size(); ++i){
     
        b[i] = round(b[i] * 1.0/k);
     
    }
    sort(b.begin(), b.end());
    
    cout << b[0] << '\n' << b[b.size() - 1];
}