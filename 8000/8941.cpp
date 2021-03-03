#include <iostream>
using namespace std;
int main()
{
	
	int n, m;
	cin >> n >> m;
	int i, j; i = 0; j = 1;
	if ((n * m) / 10 != 0)
	{
		for (i = 0; i < n * m; i++)
		{
			cout << j << "  ";
			j = j + 1;
			if (j % m ==1)
				cout << endl;
		}
	}
	else {
		for (i = 0; i < n * m; i++) {
			cout << j << " ";
			j++;
			if (j % m ==1) cout << endl;
		}
	}



}
