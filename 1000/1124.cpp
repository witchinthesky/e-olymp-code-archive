#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	char a=97;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= n; j++) {
			if (j == 0) cout << a;
			else if (n - i <= j) { cout << a; a += 1; }
			else cout << " ";

		}
		a = 97;
		cout << endl;
	}
}
