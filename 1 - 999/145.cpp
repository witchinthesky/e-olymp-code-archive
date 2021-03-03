#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 101

int main() {
      int n, equal = 1, max = 0;
      scanf("%d", &n);
      vector <int> lines;
      for(int i = 0; i < n; i++){
          int buff;
          scanf("%d", &buff);
          lines.push_back(buff);
      }
      sort(lines.begin(), lines.end());
      lines.push_back(*lines.rend() + 1);
      for(int i = 0; i < n; i++){
            if (lines[i] == lines[i + 1])
                equal++;
            else {
                max+=equal/4;
                equal = 1;
            }
      }
      cout << max;
}
