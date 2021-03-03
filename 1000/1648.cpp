#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;
int m= n - (n & (n-1));
cout << m;
}
