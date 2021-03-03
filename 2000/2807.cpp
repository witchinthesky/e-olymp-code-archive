#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) cout << "Ok";
    else {
        int x[200];
        for ( int i = 65; i <= 122; i++)
            x[i] = 0;
        char c;
        while (n){
            cin>>c;
            x[c]++;
            n--;
        }
        for (int i = 'A'; i <= 'z'; i++)
            if (x[i] % 2 != 0) 
                c = i;
        cout << c;
    }
    
}
