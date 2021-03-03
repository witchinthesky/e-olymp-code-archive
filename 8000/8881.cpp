#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && a+b>c) cout << a + b + c;
	else if (a==c && a+c>b)  cout << a + b + c;
	else if (b==c && b+c>a)  cout << a + b + c;
	else cout << "No";

}
