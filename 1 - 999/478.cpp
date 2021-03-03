#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	long long v, s, paint;
	v = a * b * c;
	s = 2 * (a * b + b * c + a * c);
	paint = (v * 6) - s;
	cout << v << " " << paint;


}
