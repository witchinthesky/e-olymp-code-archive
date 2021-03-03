#include <iostream>
#include <string>

using   namespace std;

int main() {
   string huh;
   cin >> huh;
   for (int i=97; i<=122; i++){

       for (int j=0; j<huh.size(); j++){
           if (i==huh[j]) cout << huh[j];
       }
   }
}
