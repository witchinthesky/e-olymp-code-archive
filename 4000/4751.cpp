#include <iostream>
using namespace std;
 
int main() {
    int n;
    int m=0;
    int c=0;
    cin >> n;
    int ** x = new int * [n];
    for (int i = 0; i < n; i++) 
        x[i] = new int[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            cin >> x[i][j];
    }
    for (int i = 0; i < n; i++){
        m+=x[i][i];
        c+=x[i][n-1-i];
    }
   
    cout <<  m << " " << c;
  
}
