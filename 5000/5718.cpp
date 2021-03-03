#include <iostream>
using namespace std;
int main()
{
	int n, k = 0, a = 1, l = 0;
	cin >> n;
	while (n)
	{
		if (n & 1) k++;
		a = a << 1;
		n /= 2;
		l++;
	}
	a = 1;
	for (int i = k-1; i; i--) {
		a = a << 1;
		a = a | 1;
	}
	int b = a << l - k;
	cout << b-a;

}
