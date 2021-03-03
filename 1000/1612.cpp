#include <iostream>

using namespace std;

int n;

int main()
{
	cin >> n;
	int i = 0;
	while (!(n & 1 << i)) i++;
	n ^= 1 << i;
	cout << n << endl;
}
