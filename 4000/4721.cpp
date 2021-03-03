#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int h, k, a; k = 0;
	cin >> h;
	while (h != 0) {
		a = h % 10;
		h = h / 10;
		if (a == 5) k++;
	}
	cout << k;

	
}
