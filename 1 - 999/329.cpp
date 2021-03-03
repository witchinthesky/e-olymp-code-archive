
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string word;
   int res = 0;
   while(cin >> word){
       
            for(int i = 0; i < word.size(); i++){
                if (isalnum(word[i]))
                {
                    res++; break;
                }
            }
        
   }
    cout << res;
}
