#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n; cin >> n;
   int *arr= new int[n]; int min=101;
   for (int i=0; i<n; i++){
   cin >> arr[i];
   if (min>arr[i]) min=arr[i];
   }
   for (int i=0; i<n; i++){
   
   if (min==arr[i]) 
   cout << arr[i] << ' '; 
   }
  for (int i=0; i<n; i++){
   
   if (min!=arr[i]) 
   cout << arr[i] << ' '; 
   } 
}
