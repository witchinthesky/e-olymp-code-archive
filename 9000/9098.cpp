#include <iostream>
using namespace std;

int main() {
	int n,a,u=0; cin >> n>>a;
	for (int i = n; i <=a; i++)
	{
		u ^= i;
	}
	cout << u;
}
