#include <iostream>


using namespace std;


int main()
{
	double n, a, r;
	int res;
	cin >> n >> r;
	a = 1440 * n / 1000;
	res = r / a;
	r = r / a;
	if (r > res) res++;
	cout << res;

}
