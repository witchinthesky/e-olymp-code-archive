#include <iostream>
using namespace std;

int main() {
	int arr[100][100], n,m;
	cin >> n>>m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j >0 &&j<m-1 && i != 0 && i != n - 1) cout << ' ';
			else cout << '*';
		}
		cout << endl;
	}
}
