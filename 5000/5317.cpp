#include <iostream>
using namespace std;

int main() {
	int a, k;
	cin >> a >> k;
	if ((a & (1 << k)) == 0) cout << "0";
	else cout << "1";

}
