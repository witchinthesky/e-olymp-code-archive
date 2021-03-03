#include <iostream>
#include <string>

using namespace std;

int main() {

	string numb;
	cin >> numb;
	int size = numb.size();
	int simetric = 0;
	if (size % 2 != 0) simetric++;
	for (int i = 0; i < size/2; i++) {
		if (numb[i] == numb[size - 1 - i]) simetric++;
	}

	cout << simetric;
}
