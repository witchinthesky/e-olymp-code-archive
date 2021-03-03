#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
 string str;
 cin >> str;
 long long sum=str[0]-48;
 for (int i=0; i<str.size(); i++){
 if (str[i]=='*') sum*=str[i+1]-48;
 if (str[i]=='+') sum+=str[i+1]-48;
 }
 cout << sum;
}
