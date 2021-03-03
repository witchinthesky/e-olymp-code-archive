#include <iostream>
#include <string>

using namespace std;

int main() {
  string numb, dumb;
  cin >> numb;
  if (numb[0]=='1') dumb="1";
  else dumb="0";
  for (int i=1; i<numb.size(); i++){
      if (numb[i]==numb[i-1]) dumb+="0";
      else dumb+="1";
  }
  cout << dumb;
}
