#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, i = 1, j = 0; cin >> n;
	for (int k = 0; k < n * n; k++)
	{
		j++;
		if (j > n)
		{
			i++;
			j = 1;
			cout << '\n';
		}
		if (i % 2)
			if (j % 2 == 0) cout << " ";
			else cout << "*";
		else
			if (j % 2) cout << " ";
			else cout << "*";
	}
}
