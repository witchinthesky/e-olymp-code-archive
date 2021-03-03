#include <bits/stdc++.h>
using namespace std;
typedef pair <int, int> pairs;
bool comp(pairs x, pairs y);

int main()
{
    int n;
    cin >> n;
    vector <pairs> v(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i] = make_pair(x, i + 1);
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v){
        cout << i.second << ' ';
    }
}

bool comp(pairs x, pairs y) {
    if (x.first == y.first){
        return x.second < y.second;
    }
        return x.first > y.first;
};
