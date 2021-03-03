#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;


vector <long long> num(52);

void Katalan(int n)
{   int i, j;
    num[0] = num[1] = 1;
        for(i = 2; i <= n; i++)
            for(j = 0; j < i; j++)
                num[i] += num[j] * num[i - j - 1];
}


int main()
{
    Katalan(50);
    int n;
    while(cin >> n){
        n/=2;
        cout << num[n] << '\n';
    }
}
