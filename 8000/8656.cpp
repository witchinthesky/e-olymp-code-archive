#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<int, int> x, pair <int, int> y);
int main()
{
    vector <pair<int, int>> v;
    int x, y;
    while(cin >> x >> y){
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), comp);
		
    for ( auto p : v) {
		cout << p.first << ' ' << p.second << '\n';
	}
}
bool comp(const pair<int, int> x, const pair<int, int> y) {
    if (x.first == y.first)
        return x.second > y.second;
    return x.first < y.first;
};
