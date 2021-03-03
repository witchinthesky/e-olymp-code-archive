#include <bits/stdc++.h>

using namespace std;

int main() {
   int sentense = 1, max = 0, bigmax = 0, maxs = 0;
   string word;
   while(cin >> word){
       bool end = false;
       string rword = "";
       for(int i = 0; i < word.size(); i++)
       if(isalnum(word[i])){
           rword+=tolower(word[i]);
       }
       if (word[word.size() - 1] == '.' || word[word.size() - 1] == '!' || word[word.size() - 1] == '?' ){
           end = true;
       }
       if(rword == "") continue;
           word = rword;
           reverse(word.begin(), word.end());
           if (word == rword)
           {
             max++;
             
           }
           if (end) {
               
               if (max > bigmax){
               bigmax = max;
               maxs = sentense;
               }
               sentense++;
               max = 0;
           }
       }
   
   cout << maxs;
}