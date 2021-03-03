#include <iostream>

using namespace std;

int main()
{
    double n; 
    cin >> n;
    int k=0;
    while(n>1){
    k++;
    n/=2;
    }
    cout << k;
}
