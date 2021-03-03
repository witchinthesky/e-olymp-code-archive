#include <iostream>
using namespace std;

void watermelon(int x) {
	int max = -1, min = 30000;
	int a;
	if (x<=1) cout << "Ooops!";
	else {
		while (x) {
			cin >> a;
			if (a > max) max = a;
			if (a < min) min = a;
			x--;
		}
		 cout << min << ' ' << max;
	}
}
int main() {
	int n; cin >> n;
	watermelon(n);
}
