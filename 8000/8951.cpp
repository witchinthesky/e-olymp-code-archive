#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a = n / 2 + 1, b = a;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n) {
				if (j == a) cout << "*"; else cout << " ";
			}
			else if (j == b || j == n-b+1) cout << "*";
			else cout << " ";
		}
		cout << endl;
		if (b >1) b--; else b++;
		
	}

	
}
