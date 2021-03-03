#include <iostream>
#include <algorithm>

using namespace std;

int nsd(int a, int b) {
	while (b != 0) {
		if (b > a) swap(a, b);
		a -= b;
	}
	return a;
}
 
int main() {
	int n; cin >> n; 
	int a, j = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		j = nsd(a, j);
	}
	cout << j;
}
