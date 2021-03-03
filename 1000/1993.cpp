#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double n;
   cin >> n; int k=0;
   while (n>1){
   n/=3;
   k++;}
   cout << k;
}
