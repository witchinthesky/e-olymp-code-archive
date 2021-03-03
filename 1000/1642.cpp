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
	long long n; cin >> n;
	if (n == 1) cout << "YES";
	if (n > 1 && n < 6) cout << "NO";
	if(n >= 6) 
    {
        if(fn(n)) cout << "NO";
        else cout << "YES";
    }
}
