#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k=2;
    for (int i=0; i<n; i++){
        if (i%2==0)
            {
                for (int j=0; j<n; j++)
                {
                    cout << "*";
                }
                k++;
                cout << endl;
            }
        else if (k%2==0){

        cout << "*";

            for (int j=0; j<n-1; j++)
        {
            cout << " ";
        }
        cout << endl;}
                else {

                for (int j=0; j<n-1; j++)
                {
                cout << " ";
                }
              cout << "*"<<endl;
                }
        }
        }
