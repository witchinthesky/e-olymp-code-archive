#include <iostream>
using namespace std;


int main()
{

	int n; int result;
	while (cin >> n && n != 0){
		result = n;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {

				while (n % i == 0) {
					n /= i;
				}
				result -= result / i;
			}
		}
		if (n > 1)
			result -= result / n;
		cout << result << endl;
	} 
}
