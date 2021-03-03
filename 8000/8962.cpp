#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int n, min = 0; cin >> n;
	int x[100];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i] >= x[min]) min = i;
	}
	swap(x[n-1], x[min]);
	for (int i = 0; i < n; i++) cout << x[i] << ' ';
}
