#include <iostream>

using   namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    int min=101, max=-101;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    int sum=0;
    for (int i=0; i<n; i++){
        if (min!=arr[i]&&max!=arr[i]) sum+=arr[i];
    }
    cout << sum;
}
