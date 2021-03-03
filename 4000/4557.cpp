#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int a, n, b = 0, x[5000][5000], k = 1, o[2] = {2499, 2499}; cin >> n;
	for (int i = 0; i < 5000; i++)
		for (int j = 0; j < 5000; j++) x[i][j] = 0;
	x[o[0]][o[1]] = 1;
	while (cin >> a)
	{
		switch (a)
		{
		case 1: o[0] -= 1;
				o[1] += 1;
				k++; break;
		case 2: o[1] += 1;
				k++; break;
		case 3: o[0] += 1;
				o[1] += 1;
				k++; break;
		case 4: o[0] += 1;
				k++; break;
		case 5: o[0] += 1;
				o[1] -= 1;
				k++; break;
		case 6: o[1] -= 1;
				k++; break;
		case 7: o[0] -= 1;
				o[1] -= 1;
				k++; break;
		case 8: o[0] -= 1;
				k++; break;
		}
		if (!b && x[o[0]][o[1]]) b = k-1;
		x[o[0]][o[1]] = k;
	}
	if(b) cout << b;
	else  cout << "Ok" << endl << abs(o[0]+1 - 2500) + abs(o[1]+1 - 2500);
}
