#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{   double d1,d2,d3;
   int x1,y1,x2,y2,x3,y3,x4,y4;  
   cin>>x1>>y1>>x2>>y2>>x3>>y3;
   d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
   d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
   d3=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
   if(d1>d2 && d1>d3)
{   x4=x1+x2-x3;
   y4=y1+y2-y3;
   cout<<x4<<" "<<y4<<endl;}
   if(d2>d1 && d2>d3)
{   x4=x2+x3-x1;
   y4=y2+y3-y1;
   cout<<x4<<" "<<y4<<endl;}
   if(d3>d1 && d3>d2)
{   x4=x1+x3-x2;
   y4=y1+y3-y2;
   cout<<x4<<" "<<y4<<endl;}

}
