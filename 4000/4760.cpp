#include <iostream>
using namespace std;
int main()
{
	int n, k = 0;
	int a[100];
	cin >> n;
	if (1 <= n && n <= 100) {


		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		for (int j = 0; j < n; j++) {

			if (a[j] != 0) { cout << a[j] << " ";; k++; }
		}
		int l = n - k;
		for (l; l; l--)
		{
			cout << 0 << " ";
		}

	}

}
