#include <iostream>
using namespace std;

int main() {
	int q, x, a=0;
	scanf( "%d", &q);
	for (int i = 0; i < q; i++) {
		a = 0;
		cin >> x;
		for (int j = 1; j < x; j++) {
			if ((j ^ x) > x) a++;
		}
		cout << a << endl;
	}

}
