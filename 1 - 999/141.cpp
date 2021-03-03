#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std; 

int sum(int x){
int res=0;
while (x){
res+=x%10;
x/=10;
}
return res;
}

int main(){
int n, m;
cin >> n >> m;
int k=0;
int min =1000000;
for(int i=n; i<=m; i++){
if (sum(i)<min) min=sum(i);
}
for(int i=n; i<=m; i++){
if (min==sum(i)) k++;
}
cout << k;
}
