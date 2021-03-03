#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

string __tolow(string x){
    string y=x;
    for (int i=0; i<x.size(); i++){
        if (x[i] >= 'A' && x[i] <= 'Z') y[i]+=32;
    }
    return y;
}

bool huh(char x){
    if (x>='a' && x<='z') return false;
    else if (x>='0' && x<='9' ) return false;
    else return true;
}

int main(){
   string snake;
   int maxsize=0, numb=0, size, maxnumb=0;
   while(cin >> snake){
       snake=__tolow(snake);
       if (huh(snake[snake.size()-1])) snake.erase(snake.size()-1);
       ++numb;
       string frog=snake;
       reverse(snake.begin(), snake.end());
       size=snake.size();
       if (snake==frog) {
           if (size>maxsize) {
               maxsize = size;
               maxnumb = numb;
           }
       }
   }
   cout << maxnumb;
}
