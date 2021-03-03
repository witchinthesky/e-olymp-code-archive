#include <iostream>
using namespace std;

int fn91(int n);

int main() {
	int n;
	cin >> n;
	cout << fn91(n);
}

int fn91(int n) {
	if (n >= 101) return n - 10;
	else if (n<=100) return fn91(fn91(n + 11));
}
