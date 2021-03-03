#include <bits/stdc++.h>

using namespace std;


#define M pair<string, string> 

int main()
{
    int n;
	cin >> n;
	vector<M> a(n);
	for (int i = 0; i < n; i++) 
    	cin >> a[i].second >> a[i].first;
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) 
    	cout << a[i].second << " " << a[i].first << "\n";
}
