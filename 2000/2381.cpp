#include <iostream>
#include <set>
#include <vector>

using namespace std;



int main() {
    int x;
    set <int> st;
    vector <int> v;
    while(cin >> x && x != -1){
        if (x == 0){
            int sum = 0;
            for(int i = 0; i < v.size(); i++){
                if (st.find(v[i])!= st.end())
                    sum++;
            }
            cout << sum << endl;
            st.clear();
            v.clear();
        }
        else {
            v.push_back(x*2);
            st.insert(x);
        }
    }
}
