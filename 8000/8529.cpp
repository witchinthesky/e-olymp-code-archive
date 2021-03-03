#include <bits/stdc++.h>

using namespace std;

int main()
{
  string num, num2;
  cin >> num;
  sort(num.begin(), num.end());
  num2 = num;
  reverse(num2.begin(), num2.end());
  long long x = atoi(num2.c_str()) - atoi(num.c_str());
  num = to_string(x);
  while(num.size() < num2.size())
  num = '0' + num;
  cout << num;
}

