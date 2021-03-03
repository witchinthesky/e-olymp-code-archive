#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
 string str;
 cin >> str;
 int i=0;
 if (str[0]=='-') i++;
 long long sum1=0, sum2=0;
 bool mark=0;
 for (i; i<str.size(); i++){
 if (str[i]=='.') mark=1;
 else if(mark) sum1+=str[i]-48;
 else sum2+=str[i]-48;
 }
 if (sum1==sum2) cout <<"Yes";
 else cout << "No";
}
