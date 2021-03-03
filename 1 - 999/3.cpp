#include <cstdlib>
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    double x1, y1, r1;
    double x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
 
	if( x1 == x2 && y1 == y2 && r1 == r2 )
	{
		cout << -1 << endl;
	}
	else if( sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) == r1+r2 || sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r2 == r1 || sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r1 == r2 )
	{
		cout << 1 << endl;
	}
	else if( sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) > r1+r2  )
	{
		cout << 0 << endl;
	}
	else if( sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r2 < r1 || sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) ) + r1 < r2 )
	{
		cout << 0 << endl;
	}
	else 
	{
		cout << 2 << endl;
	}
}
