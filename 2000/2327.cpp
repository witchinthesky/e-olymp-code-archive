#include <iostream>
#include <vector>

#define MAX 100001
using namespace std;


int main() {
        int n;
        cin >> n ;
        vector <int> v(MAX, 0);
        for(int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            v[x]++;
        }
        for (int i = 0; i < MAX; i++){
            if (v[i] != 0){
                for (int j = 0; j < v[i]; j++){
                    printf("%d ", i);
                }
            }
        }

}
