#include <iostream>
using namespace std;

int main() {
	int a, k, x;
	cin >> a >> k;
	x = 0;
	x = ~x;
	x = x >> k;
	x = x << k;
	x = ~x;
	a = a & x;
	cout << a;
}
