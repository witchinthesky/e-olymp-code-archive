#include <iostream>
#include <string>

using namespace std;

int main() {
  string numb, dumb;
  cin >> numb;
  for (int i=0; i<numb.size(); i++){
      if (numb[i]%2==0) dumb+=numb[i]+1;
      else dumb+=numb[i];
  }
  cout << dumb;
}
