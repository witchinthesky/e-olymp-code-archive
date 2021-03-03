#include <bits/stdc++.h>
using namespace std;


int main() {

    map<string, int> base;
    int n, k;
    string surname;
    cin >> n;
    while(n--){
        cin >> surname >> k;
        base[surname] = k;
    }
    cin >> k;
    while(k--){
        cin >> surname;
        if(base.find(surname) != base.end())
        {
            cout << base[surname] << endl;
        }
        else {
            cout << "-1\n";
        }
    }
}