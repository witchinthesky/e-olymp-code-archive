#include <iostream>
#include <string>

using namespace std;

int main() {
   string numb;
   cin >> numb;
   int i=numb.find('.');

   for (i+=1; i<numb.size(); i++){
       if (numb[i]!='0') {
           cout << "No";
           exit(0);
       }
   }
   cout << "Ok";
}
