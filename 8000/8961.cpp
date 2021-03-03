#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, a[100], min = 1001, j = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] < min) {
			min = a[i];
			j = i; }
	}
	swap(a[0], a[j]);
	for (int l = 0; l < n; l++) {
		cout << a[l] << " ";
	}
}
