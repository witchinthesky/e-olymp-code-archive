#include <bits/stdc++.h>
using namespace std;

typedef short pairs;
bool comp(pairs x, pairs y);

int main()
{
    int n;
    cin >> n;
    vector <pairs> v(n);
    for(short i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v){
        cout << i << ' ';
    }
}

bool comp(pairs x, pairs y) {
    if (x%10 == y%10){
        return x < y;
    }
       return x%10 < y%10;
}
