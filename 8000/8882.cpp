#include <iostream>

using namespace std;

int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == b && b==c && c == d) cout << a * a;
	else cout<<"No";
}
