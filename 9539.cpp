#include <iostream>
#include <cmath>
using namespace std;



int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int res = a - ((a - b) + (a - c));
	cout << res;
	
}
