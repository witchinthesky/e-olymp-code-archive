#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std; 


long double fn(long double x);

int main(){
long double x; 
while(cin >> x)
cout << fixed << setprecision(6) << fn(x) <<endl;
}

long double fn(long double x){
return sin(x) + sqrt(log(3*x) / log(4)) + ceil(3 * exp(x));
    
}
