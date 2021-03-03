#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= 7; i++)
		if ((n + i) % 7 == 0) cout << n + i;
}
