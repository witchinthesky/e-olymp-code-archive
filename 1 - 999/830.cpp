#include <iostream>

using namespace std;

bool fn(long long x) {


	if (x==1) return false;
	if (x == 2 || x == 3) return true;
	if (x%2 == 0) return false;
	for (int i=3; i*i <=x; i+=2){
        if (x%i==0) return false;
	}
	return true;
}


int main()
{
	int a, b;
	cin >> a >> b;
	bool k = false;
	for (int i=a; i <= b; i++) {
		if (fn(i)) { cout << i << endl; k = true; }
	}
	if (!k) cout << "Absent";
}
