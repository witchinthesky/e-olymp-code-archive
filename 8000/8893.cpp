#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if ((n%3==0)&&(n%2==0 && abs(n)>9 && abs(n)<100)) cout<<"YES";
    else cout<<"NO";
}
