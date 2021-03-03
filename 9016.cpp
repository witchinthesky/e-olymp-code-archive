//
// Created by witchinthesky on 1/2/2021.
//

#include <iostream>
#include <vector>

using namespace std;

bool find(vector<int> &a, int value){
    int l = 0, r = a.size();
    while(r - l > 0){
        int mid = (r + l)/2;
        if(a[mid] == value)
            return true;
        if(a[mid] > value){
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return a[l] == value;
}

int main(){
    int n, m, v; cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    while(m--){
        cin >> v;
        cout << (find(a, v) ? "YES" : "NO") << "\n";
    }
}