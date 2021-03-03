#include <iostream>

int main(){
int n;
std :: cin >> n;
int res=1;
for (int i=2; i<=n; i++){
res*=i;
}
std :: cout << res;
}
