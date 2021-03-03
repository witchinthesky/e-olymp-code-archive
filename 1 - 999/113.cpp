#include <iostream>
#include <vector>

using namespace std;

int main() {
      int n, max = 0;
      cin >> n;
      vector <int> balloon(11, 0);
      for(int i = 0; i < n; i++){
          int x;
          scanf("%d", &x);
          balloon[x]++;
      }
      for (int i = 0; i <= 10; i++){
          if (balloon[i] > max){
              max = balloon[i];
          }
      }
      cout << n - max;
}
