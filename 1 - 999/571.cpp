#include <iostream>
#include <algorithm>

using namespace std;
long long nsd(long long a, long long b) {
	while (b != 0) {
		if (b > a) swap(a, b);
		a -= b;
	}
	return a;
}
 
int main() {
	long long n; cin >> n; 
	long long a, j = 0;
	for (long long i = 0; i < n; i++) {
		cin >> a;
		j = nsd(a, j);
	}
	cout << j;
}
