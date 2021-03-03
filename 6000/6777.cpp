#include <iostream>
using namespace std;

int main()
{
    int t;
	int arr[100];
	cin >> t;
	int a=1;
	for (int i=0; i<t; i++){
        cin >> arr[i];
	}
	int f=1;
	for (int i=0; i<t; i++){
        for (int j=1; j<arr[i]; j++){
            a*=2;
            f+=a;
        }
        cout << f << endl;
        a=1;
        f=1;
	}

}
