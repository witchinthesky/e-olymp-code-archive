#include <iostream>
#include <string>

using namespace std;

int n, m;
bool k = false;
string a, b = "", c;

int main()
{
	cin >> n >> m >> a >> c;
	if (n < m)
	{
		swap(n, m);
		swap(a, c);
	}
	for (int i = 0; i < n - m; i++) b += "0";
	b += c;
	for (int i = 0; i < n; i++)
	{
		if (a[i] + b[i] == 97)
		{
			cout << "1";
			k = true;
		}
		else if (k)cout << "0";
	}
	if (!k) cout << "0";
	cout << endl;
}
