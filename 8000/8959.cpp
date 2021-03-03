#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
	int n;
	double a[100], b, c;
	cin >> n;
	cin >> a[0];
	b = a[0]; c = a[0];
	for (int i = 1; i < n; i++)
	{
		cin >> a[i];
		b = max(b, a[i]);
		c = min(c, a[i]);
	}
	b = b - c;
	cout<< b;

}
