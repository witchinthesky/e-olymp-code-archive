#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int bank[6] = {500, 200, 100, 50, 20, 10};

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int cash, banknotes = 0, i = 0;
    cin >> cash;
    while(cash >= 10){
        if (cash >= bank[i]){
            banknotes += (cash/bank[i]);
            cash = cash % bank[i];
        }
        else {
            i++;
            if (i > 5)
                break;
        }
    }
    cout << ((cash != 0) ? -1 : banknotes);
}
// Created by May 12.05.2020 at 10:20
