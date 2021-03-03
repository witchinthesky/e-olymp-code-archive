#include <iostream> 
#include <cmath> 
using namespace std; 
int main() { 
	int n; 
	cin>>n; 
	int j=9; 
	int h=81; 
	if (n==1) cout<<j; 
	else if(n==2) cout<<h;  
	else {for (int i = 2; i <n ; ++i) 
	{ j--; h*=j; } 
	cout<<h; 
}
}
