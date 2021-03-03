#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long *arr=new long long [n];
    long long min, min2;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    min=arr[0]; min2=arr[0];
    for (int i=0; i<n; i++){
        if (arr[i]<min) min=arr[i];
    }
    for (int i=0; i<n; i++){
        if (arr[i]<min2 && arr[i]!=min) min2=arr[i];
    }
    cout << min << ' ' << min2;
}
