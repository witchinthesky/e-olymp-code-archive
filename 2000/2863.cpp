#include <iostream>
using namespace std;
int main()
{

	int n, i;
	cin >> n;
	for (i = 1; i <= n; i=i + 2)
	{
		if (n % i == 0) cout << i << endl;
	}

}
