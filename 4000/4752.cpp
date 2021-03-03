#include <iostream>

using namespace std;

int main()
{
	int h, w, k=1;
	int a[1000][1000];
	cin >> w >> h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			a[i][j] = k;
			k++;
		}
	}
	int l = 1, sum = 0;
	for (int j = 0; j < w; j++){
	for (int i = 0; i < h; i++) {
			if (a[i][j] == l) sum += 1;
			l++;
		}
	}
	cout << sum;
}
