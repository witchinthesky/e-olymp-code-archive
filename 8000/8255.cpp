#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

void f(int x, int y);


int main()
{
	int n, s;
	cin >> n >> s;
	f(n, s);

}


void f(int x, int y) {

	int begin = 1 * pow(10, x - 1);
	int end = begin * 10;

	for (int i = begin; i < end; i++) {
		int sum = 0; int numb = i;
		for (int j = x; j; j--) {
			sum += numb % 10;
			numb /= 10;
		}
		if (sum == y) cout << i << endl;
	}

}
