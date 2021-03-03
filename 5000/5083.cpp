#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int sum(long long x){
    int res=0;
    
    while (x){
        res+=x%10;
        x/=10;
    }
    return res;
}

int main()
{
  int n;
  cin >> n;
  int numb;
  cin >> numb;
  int min=sum(numb);
  int minn=numb;
  for (int i=1; i<n; i++){
      cin >> numb;
      if (sum(numb)<=min){
          min=sum(numb);
          minn=numb;
      }
  }
  cout << minn;
}
