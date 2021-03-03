#include <iostream>
#include <string>

using namespace std;


int main() {
	char l; int k;
	cin >> l >> k;
	int reg = 0;
	int h = 0;
	for (int i = 0; i < k; i++) {
		h += k + i;
	}
	cout << h << endl;
	for (int i = 0; i < k; i++) {
		for (int j = 1; j <= k+k-1; j++) {
			if ((k + reg) >= j && (k - reg) <= j) cout << l;
			else if (k-reg>j) cout << ' ';
		}
		reg += 1;
		cout << endl;
	}
}
