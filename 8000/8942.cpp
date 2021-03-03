#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c = n;
	if (n > 1 && n <= 100) {
		while (c) {
			cout << "*";
			c--;
		}
		cout << endl;
		c = n-2;
		cout << "*";
		while (c) {
			cout << " ";
			c--;
		}
		cout << "*"<<endl;
		c = n;
		while (c) {
			cout << "*";
			c--;
		}
	}
}
