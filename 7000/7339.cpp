#include <iostream>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	while (n) {
		if (n % 2 == 0)
			s = "0" + s;
	
		else s = "1" + s;
		n = n >> 1;
	}
	cout << s;

}
