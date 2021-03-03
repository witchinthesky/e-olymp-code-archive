#include <iostream>
#include <vector>

using namespace std;

int main() {
    int max_pair = 0, y;
    vector <int> pair(10, 0);
    while(cin >> y){
        pair[y]++;
    }
    for(int i = 0; i < pair.size(); i++){
        max_pair+=pair[i]/2;
    }
    cout << max_pair;
}
