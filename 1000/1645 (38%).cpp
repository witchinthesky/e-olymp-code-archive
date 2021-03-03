#include <iostream>

#include <cmath>

using namespace std;

int main() {
	long n;
	cin >> n;
	string s;
	int say = 0;
	while (n) {
		if (n % 2 == 0)
			s = "0" + s;

		else { s = "1" + s; say++; }
		n = n >> 1;
	}
	

	cout<< (pow(2, say)- 1);

}
