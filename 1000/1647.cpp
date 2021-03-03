#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int x=-1;
int y=1;
	while (k){
    x=x^y; 
    y=y<<1; 
    k--;
	}
   
	n=n&x;
	cout << n;
}
