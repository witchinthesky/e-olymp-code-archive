#include <iostream>

using namespace std;

int main() {
   short numb;
   cin >> numb;
   short a=numb%10; 
   short b=(numb/10)%10;
   numb/=100;
   if (a==b || a==numb || b==numb) cout << "NO";
   else cout << "YES";
}
