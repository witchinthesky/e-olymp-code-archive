#include <iostream>
#include <vector>

using namespace std;

vector <int> upd_selection_sort(vector <int> &v){
    vector <int> buff = v;
    int left_lim = 0, right_lim = v.size() - 1;
    for (int i = 0; i < v.size(); i++){
        int iter = left_lim;
        for (int j = iter; j <= right_lim; j++){
            if (buff[j] < buff[iter]){
                iter = j;
            }
        }
        if (i%2 == 0) {
            swap(buff[iter], buff[left_lim]);
            left_lim++;
        }
        else {
            swap(buff[iter], buff[right_lim]);
            right_lim--;
        }
    }
    
    return buff;
}

int main() {
    int n, max = 0;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int buff;
        cin >> buff;
        v.push_back(buff);
    }
    v = upd_selection_sort(v);
    for(int i = 0; i < n; i++)
        cout << v[i] << ' ';

}
