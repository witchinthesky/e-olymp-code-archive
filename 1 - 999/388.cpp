#include <iostream>
using namespace std;
int main()
{
	
	int n, i;
	i = 0;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0) n = n / 2;
		else n = n + 1;
		i = i + 1;
	}
	cout << i;


}
