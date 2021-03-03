#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
 int x=n;
    for (n;n;n--){
      if (n==x){
            for (int i=x; i; i--){
            cout << "*";}
        cout <<endl;
      }
      else if (n==1){
        for (int i=x; i; i--){
            cout << "*";}
        cout <<endl;
      } else{ cout <<"*";
      for (int i=x-2; i; i--){cout<<" ";
            }
            cout <<"*"<<endl;
    }

	}}
