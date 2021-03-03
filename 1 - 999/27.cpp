#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a=1; int l=0;
    cin >> n;
    int m = n, amax=0;
    while (m)
	{
		a = a << 1;
		m = m >> 1;
		l++;
	}
	m=n;
	a=a>>1;
	int k=a;
    k=k<<1;
    k=~k;
	for (int i=l; i; i--){

            int g=n&a;
            if (g!=0) {
                n=n<<1;
                n=n&k;
                n=n|1;
		    };
		    if (g==0){
                n=n<<1;
		    }
		     if (n>m) m=n;

	}
	cout << m;

}
