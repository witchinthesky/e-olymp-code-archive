//
// Created by witchinthesky on 1/2/2021.
//

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

double a, b, c, d;
double r = 1.0, l;
const double EPS = 1e-6;

double f(double x){
    return a * (x * x * x) + b *(x * x) + c * x + d;
}

double binary_search(){

    while(r - l > EPS) {
        double mid = (r + l) / 2;
        if (f(mid) * f(r) > 0)
            r = mid;
        else
            l = mid;
    }
    return l;
}

int main(){
    cin >> a >> b >> c >> d;
    // шукаємо межі
    while(f(r) * f(-r) >= 0)
        r *= 2;
    l = -r;
    cout << fixed << setprecision(9) << binary_search();
}