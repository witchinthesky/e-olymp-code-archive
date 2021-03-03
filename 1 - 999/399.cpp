#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

//Наслідки грипу в Простоквашино

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
    int test, n;
    cin >> test;
    for (int i = 0; i < test; i++){
        cin >> n;
        if (n%2 != 0) cout << "0\n";
        else {
            n/=2;
            cout << num[n] << '\n';
        }
    }

}
