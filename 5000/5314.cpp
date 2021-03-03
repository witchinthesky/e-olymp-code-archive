#include <iostream>
using namespace std;

int main() {
	int n, k, x, y;
	cin >> n >> k;
	x = 1 << k;
	y = 1 << n;
	cout << x + y;

}
