#include <iostream>

using namespace std;

long long modulo(long long a, long long b, long long n) {
	long long x = 1, y = a;
	while (b > 0) {
		if (b % 2 == 1) {
			x = (x * y) % n; 
		}
		y = (y * y) % n; 
		b /= 2;
	}
	return x % n;
}

int main()
{
	long long a, b, n;
	cin >> a >> b >> n;
	cout << modulo(a, b, n);
}
