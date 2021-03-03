#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin>>n; c=n-1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i==j) cout << "*";
            else if (j==c) cout << "*";
            else cout << " ";
        }
        c-=1;
        cout << endl;
    }
	}
