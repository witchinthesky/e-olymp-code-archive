#include <iostream>
#include <vector>

#define MAX 2000001

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(MAX);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[x] = 1;
    }
    int res = 1;
    for(res; res <= n; res++){
        if (v[res] == 0){
            break;
        }
    }
    cout << ((res > n) ? 0 : res);
}
