#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n; cin >> n;
	int k = 0;
	for (int h = 100; h <= 999; h++) {
		int j = h;
		int sum = 0;
		while (j) {
			sum += j % 10;
			j /= 10;
		}
		if (sum == n) k++;
	}
	cout << k << endl;
	for (int h = 100; h <= 999; h++) {
		int j = h;
		int sum = 0;
		while (j) {
			sum += j % 10;
			j /= 10;
		}
		if (sum == n)
			cout << h << endl;
	}
}
