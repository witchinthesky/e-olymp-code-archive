#include <iostream>
#include <string>

using namespace std;


int main() {

    string line;
    getline(cin, line);
    int count=0;
        for (int i=0; i<line.size(); i++){
            if (line[i]=='.' || line[i]=='!' || line[i]=='?')
                ++count;
        }
    cout << count;
}
