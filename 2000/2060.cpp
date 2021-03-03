#include <iostream>

using namespace std;


int main(){

    int numb;
    cin >> numb; 
    unsigned long long res=1;
    for (int i=0; i<numb; i++){
        res*=2;
        res+=2;
    }
    cout << res;
}
