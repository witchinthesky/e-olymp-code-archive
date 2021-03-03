#include <iostream>
#include <string>
using namespace std;

int gol(char j) {
	bool y = 0;
	switch (j){
			case 65: y = 1;
			case 69: y = 1;
			case 73: y = 1;
			case 79: y = 1;
			case 85: y = 1;
			case 89: y = 1;
			case 97: y = 1;
			
	}
	return y;
}



int main()
{
	string a;
	int k=0;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++) {
		if (gol(a[i])) ++k;
	}
	cout << k;
}
