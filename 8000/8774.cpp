#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map <int, int> v;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        v[y]++;
    }
    for(auto i : v){
        if (i.second > n/2){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
