#include <iostream>
#include <string>

using namespace std;

int main(){

    string numb;
    cin >> numb;

    if (numb[0]=='-') {
        cout << '-';
        for (int i=1; i<4; i++){
            for (int j=0; j<2; j++){
                cout << numb[i];
            }
        }
    }
    else {
        for (int i=0; i<3; i++){
            for (int j=0; j<2; j++){
                cout << numb[i];
            }
        }
    }


}
