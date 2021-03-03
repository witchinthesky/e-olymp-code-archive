#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n, limit;
    cin >> n >> limit;
    multiset <int> st;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    int res = 0;
    while(st.size() > 1){
        auto t = st.end();
        t--;
        int a = *t;
        if (limit < a){
            cout << "Impossible";
            return 0;
        }
        else{
            st.erase(t);
            t = st.begin();
            int b = *t;
            if(limit >= b + a){
                st.erase(t);
            }
            res++;
        }
    }
    if (st.size() > 0) res++;
    cout << res;
}
// Created by May 13.05.2020 at 10:20
