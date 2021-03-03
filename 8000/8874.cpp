#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	cin >> a;
  a=abs(a);
	if (a>9 && a<100) cout << "Ok"; else cout << "No";
}
