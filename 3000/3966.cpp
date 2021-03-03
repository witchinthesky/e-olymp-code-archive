//
// Created by witchinthesky on 1/1/2021.
//

#include <iostream>
#include <vector>
using namespace std;

int N, M, value;
int *butterflies = new int[100001];
bool binary_search(int *a, int left, int right, int value){

    if (right < left)
        return false;
    int middle = (right + left) / 2;
    if (a[middle] == value)
        return true;
    if (a[middle] > value)
        right = middle - 1;
    else
        left = middle + 1;
    return binary_search(a, left, right, value);
}
