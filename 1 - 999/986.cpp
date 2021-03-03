#include <iostream>
#include <vector>

#define MAX 101

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;
    vector<int> m(MAX);
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    for(int i = 0; i < 100; i++){
        if (m[i] + m[i + 1] > max){
            max = m[i] + m[i + 1];
        }
    }
    cout << max;
}
