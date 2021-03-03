#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n; cin >> n;
   int *arr= new int[n]; int k=0; int maxk=0;
   for (int i=0; i<n; i++){
   cin >> arr[i];
   if (arr[i]>0) k++;
   else k=0;
   maxk=max(k, maxk);
   }
   cout << maxk;
}
