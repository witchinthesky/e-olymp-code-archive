int P(int n, int k){
    int res;
    if (n == 0 && k == 0) res = 1;
    else if (k == 0) res = 0;
    else if (k > n) res = P(n, n);
    else res = P(n, k-1) + P(n-k, k);
    return res;
}
