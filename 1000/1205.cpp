#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main() {
	double y, x;
	cin >> x >> y;
	double expon = 1.0 / x;
	cout << fixed << setprecision(0) << pow(y, expon);
}
