#include <iostream>


int main() {
    int n;
    std :: cin >> n;
    for (int i=0; i<4; i++){
        if (n%2!=0) {
            std :: cout << "NO";
            exit(0);
        }
        n/=10;
    }
    std :: cout << "YES";
}
