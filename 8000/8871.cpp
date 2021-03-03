#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int n = 0;
	n = max(a, b);
	n = max(n, c);
	cout << n;
}
