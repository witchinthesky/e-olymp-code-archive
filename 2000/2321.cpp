#include <iostream>
#include <vector>

using namespace std;

void sorti(vector<int> &v){
    for(int i = 1; i < v.size(); i++){
        int key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key){
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }
}

int main() {
        int n;
        cin >> n;
        vector <int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        sorti(nums);
        for(auto i : nums){
            cout << i << ' ';
        }
}
