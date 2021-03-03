#include <iostream>
#include <vector>

#define MAX 1001
using namespace std;


int main() {
        int n, age = 0;
        cin >> n ;
        vector <int> v(MAX, 0);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            v[x]++;
        }
        for (int i = 0; i < MAX; i++){
            if (v[age] < v[i]){
                age = i;
            }
        }
        cout << age;

}
