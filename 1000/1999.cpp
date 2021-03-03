//
// Created by May on 02.05.2020.
//

#include <bits/stdc++.h>
using namespace std;

string s;
int n, odd[1000010], even[1000010];

void oddPalindromesCount() {
    int l = 0, r = -1;
    for (int i = 0; i < n; i++) {
        int k = (i > r ? 1 : min(odd[l + r - i], r - i));
        while (i - k >= 0 && i + k < n && s[i - k] == s[i + k])
            k++;
        odd[i] = k;
        if (i + k - 1 > r) {
            l = i - k + 1;
            r = i + k - 1;
        }
    }
}

void evenPalindromesCount() {
    int l = 0, r = -1;
    for (int i = 0; i < n; i++) {
        int k = (i > r ? 0 : min(even[l + r - i - 1], r - i));
        while (i - k >= 0 && i + k + 1 < n && s[i - k] == s[i + k + 1])
            k++;
        even[i] = k;
        if (i + k > r) {
            l = i - k + 1;
            r = i + k;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    n = s.size();
    memset(odd, 0, sizeof(odd));
    memset(even, 0, sizeof(even));
    evenPalindromesCount();
    oddPalindromesCount();
    int res = 0;
    for(int i = 0; i < n; i++){
        res += odd[i] + even[i];
    }
    cout << res;
}
