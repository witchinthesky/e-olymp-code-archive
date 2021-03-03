#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
   string fillip;
   cin >> fillip;
   char maxix=fillip[0];
   for (int ii=1; ii<fillip.size(); ii++){
       if (maxix<fillip[ii]) maxix=fillip[ii];
   }
   short count=0;
    for (int ii=0; ii<fillip.size(); ii++){
        if (maxix==fillip[ii]) count++;
    }
    cout << maxix << ' '<< count;
}
