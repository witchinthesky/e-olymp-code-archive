#include <iostream>
#include <string>

using namespace std;


int main() {

    string line;
    getline(cin, line);
    if (line.size()%2!=0) cout << "no";

    else {
        string sub1=line.substr(0, line.size()/2);
        line=line.substr(line.size()/2);
        if (line==sub1) cout << "yes";
        else cout << "no";
    }
}
