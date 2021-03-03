#include <iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	int x=0; int k=2;
    if (n<=500)
    {
	    for (int i=0; i<n; i++) 
	    {
             if (k%2==0)
             {
                    for (int j=0; j<n; j++)
                    {
                      x+=1;
                      cout << x <<" ";

                     }
                    x+=n;
                    k+=1;
             }
        else
             {
            for (int j=0; j<n; j++) 
            {
                cout << x <<" ";
                x-=1;
            }
            x+=n; 
            k+=1;
        }

        cout <<endl;
	    }
    }
}
