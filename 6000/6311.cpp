#include <iostream>
using namespace std;

int main()
{
	int n, m, a=1, l = 0;
	cin >> n >> m;
	if (m!=0) a = a << m;
	int g=n&a;
	if (g != 0) cout << "YES " << endl;
	else cout << "NO " << endl;

  
}
