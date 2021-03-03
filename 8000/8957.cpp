#include <iostream>

using   namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i]%2==0) {

            k++;
        }
    }
    if (k==0) cout << "NO";
    else {
        cout << k << endl;
        for (int i = n-1; i >=0; i--) {
            if (arr[i]%2==0)
            cout << arr[i] << ' ';
        }
    }
}
