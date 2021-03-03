
#include <bits/stdc++.h>

using namespace std;
#define M 24
#define V fixed << setprecision(2) 
int main()
{
    vector <int> v(7, 0);
    vector <string> v2 = {"Re", "Pt", "Cc", "Ea", "Tb", "Cm", "Ex"};
    string a; int c = 0;
    while(cin >> a){
        c++;
        if (a == "Re") v[0]++;
        else if (a == "Pt") v[1]++;
        else if (a == "Cc") v[2]++;
        else if (a == "Ea") v[3]++;
        else if (a == "Tb") v[4]++;
        else if (a == "Cm") v[5]++;
        else if (a == "Ex") v[6]++;
    }
    for (int i = 0; i < 7; i++){
        double f = 1.0/c*v[i];
        cout << v2[i] << ' ' << v[i] << ' ' << V << f << '\n';
    }
    cout << "Total " << c << ' '  << V << 1.0; 
        
}


