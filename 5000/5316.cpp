#include <iostream>
using namespace std;

int main() {
	int a, k;
	cin >> a >> k;
	a = a ^ (1<<k);
	cout << a;

}
