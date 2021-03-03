#include <iostream>
using namespace std;
int main()
{
	int k; 
	unsigned int a;
	cin >> a >> k;
	string sb = "";
	for (int i = 0; i < k; i++)
	{
		if (a & 1)sb = '1' + sb;
		else sb = '0' + sb;
		a /= 2;
	}
		cout << sb;

}
