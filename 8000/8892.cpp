#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if ((abs(n)%2==1)^(n>99 && n<1000)) cout<<"YES";
    else cout<<"NO";
}
