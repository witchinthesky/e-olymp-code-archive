#include <iostream>
using namespace std;

int main() {
	int n, a[100], max = -100, j = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
		{
			max = a[i]; j = i;
		}
	}
	int k = 0;
	for (int l = 0; l < n; l++) {
		if (a[l] != max) cout << a[l] << " "; }

	for (int l = 0; l < n; l++) {
		if (a[l] == max) cout << a[l] << " "; }
	

}
