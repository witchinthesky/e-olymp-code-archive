#include <iostream>
#include <cmath>
using namespace std;



int main() {
	
	long long n;
	cin >> n;
	long long res = 0;
	long long i = 0; 
	
	for (int j = 1; j <= n; j++) {
			for (int h = 1; h <= n; h++) {
				i++;
				if (j % 2 == 0) {
					if (i % 2 == 0) res += i;
				}
				else if (i % 2 != 0) res += i;
			}
		}
	cout << res;
	

}
