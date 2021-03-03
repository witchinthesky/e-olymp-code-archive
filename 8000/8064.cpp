#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double graa(string x);

int main()
{

    int n;
    while(cin >> n){
        double ch=0, znam=0;
        for (int i=0; i<n; i++){
            double credit;
            string grade;
            cin >> credit >> grade;
            if (grade!="P" && grade!="N"){
                znam+=credit;
                ch+=credit*graa(grade);
            }
        }
        if (znam!=0) cout << fixed << setprecision(2) << ch/znam << endl;
        else cout << 0.00 << endl;
    }
}

double graa(string x){

        if (x=="A")
            return 4.0;
        else if (x== "A-")
            return 3.7;
        else if (x=="B+")
            return 3.3;
        else if(x=="B")
            return 3.0;
        else if (x=="B-")
            return 2.7;
        else if (x=="C+")
            return 2.3;
        else if (x=="C")
            return 2.0;
        else if (x=="C-")
            return 1.7;
        else if (x== "D")
            return 1.3;
        else if (x=="D-")
            return 1.0;
        else if (x=="F")
            return 0;

}
