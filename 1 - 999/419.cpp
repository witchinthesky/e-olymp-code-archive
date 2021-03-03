#include <iostream>
#include <algorithm>

using namespace std;


int fnsize(int n);

int main(){
	
	int n; 
	int b; 
	while (cin >> n && cin >> b) {
		int i = n; int j = b;
		if (n > b) swap(i, j);
		int maxs = 0;
		for (i; i <= j; i++) {
			maxs = max(fnsize(i), maxs);
		}
		cout << n << ' ' << b << ' ' << maxs << endl;
	}

}


int fnsize(int n) {
	int size = 1;
	while (n != 1) {
		if (n % 2 != 0) n = 3 * n + 1;
		else n /= 2;
		size++;
	}
	return size;
}
