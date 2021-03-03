#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

	int main()
		{
		long long a, b, n;
		cin >> a >> b >> n;
		long long c = 1, m = 0;
		for (m; m < b; m++) {
			c = fmod((c * a), n);
		}
		cout << c;
	}
