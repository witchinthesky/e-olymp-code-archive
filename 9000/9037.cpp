#include <iostream>
#include <cmath>
using namespace std;

int max(int x) {
	int res; int max = 0;
	while (x > 0) {
		res = x % 10;
		x /= 10;
		if (res > max) max = res;
	}
	return max;
}


int main() {
	int n;
	cin >> n;
	int res = 0;
	while (n > 0) {
		n -= max(n);
		res++;
	}
	cout << res;
}
