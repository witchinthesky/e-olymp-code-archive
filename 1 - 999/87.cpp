#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int j = a.size();
	bool h[20000];
	int m = 10000;
	for (int i = 0; i < 20000; i++)
		h[i] = 0;
		h[m] = 1;
	for (int i=0; i<j; i++){
		if (a[i] == 'R') {
			h[++m] = 1;
		}
		if (a[i] == 'L') {
			h[--m] = 1;
		}
	} 
	int l = 0;
	for (int i = 0; i < 20000; i++) 
		if (h[i] == 1) l += 1;
	
	cout << l;
}
