#include <iostream>

using   namespace std;

const int mas = 5;

int main() {
  int *arr=new int[mas];
  for (int i=0; i<mas; i++){
      cin >> arr[i];
  }

  for (int i=0; i<mas; i++){
      if (i==0 || i==mas-1) cout << arr[i] << ' ';
      else cout << arr[i-1]+arr[i+1] << ' ';
  }
}
