#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if ((abs(n)%2==0 && n>0)||(abs(n)%2==1 && n<0)) cout<<"NO";
    else cout<<"YES";
}
