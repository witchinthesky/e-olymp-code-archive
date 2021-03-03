#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() 
{   int n; 
    cin >> n; 
    int *arr = new int[n];
    for(int i=0; i<n; i++) 
    {   int x;
        cin >> x; 
        arr[i]=abs(x); 
    }
    sort(arr,arr+n);
    int count = 1; 
    for(int i=1; i<n; i++) 
    { 
        if(arr[i-1]!=arr[i]) count++; 
    }
    cout << count << endl; 
}
