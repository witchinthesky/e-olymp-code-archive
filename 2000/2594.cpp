#include <iostream>

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;
    int arr[10][10];
    for(int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            arr[i][j] = 0;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        arr[x][y]+=1;
        if (arr[x][y] > max)
            max = arr[x][y];
    }
    cout << max;
}
