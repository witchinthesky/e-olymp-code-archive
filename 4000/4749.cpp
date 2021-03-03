#include <iostream>
using namespace std;

int main() {
	int n, x, m;
	int a[500][500];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> x;
			sum+=a[i][j]*x;
		}
	}
	cout << sum;
	}
