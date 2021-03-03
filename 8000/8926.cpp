#include <iostream>


using namespace std;

int main()
{
	long long n, k; k = 0;
	cin >> n;
	int a, i; i = 1;
	while (n != 0)
	{
		a = n % 10;
		n = n / 10;
		if (a % 2 != 0) {
			a--;
			k = k + (a * i);
			i = i * 10;
		} else
		{
			a++;
			k = k + (a * i);
			i = i * 10;
		}
	}
	cout << k;
}
