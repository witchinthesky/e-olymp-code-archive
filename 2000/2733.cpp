#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int x1=2, x2=2;
	if (n!=0)
	x1=x1<<n-1;
	else x1=1;
	if (m!=0)
	x2=x2<<m-1;
	else x2=1;

	cout << x1 + x2;
}
