#include <iostream>
using namespace std;

int main()
{        
  int n;
	cin >> n;
	long long ffirst = 1, fsecond=1;
	for (int i = 1; i < n; i++)
	{
		swap(ffirst, fsecond);
		fsecond += ffirst;
	}
	cout << fsecond << endl;
}
