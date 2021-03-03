#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	long long i = 2;
	while (i < n) {
		cout << i << ' ';
		i *= 2;
	}
}
