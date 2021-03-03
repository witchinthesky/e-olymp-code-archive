#include <iostream>
#include <vector>

using namespace std;

int partition (vector <int> &v, int low, int high)
{
    int pivot = v[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (v[j] < pivot)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[high]);
    return (i + 1);
}

void quickSort( vector <int> &v, int low, int high)
{
    if (low < high)
    {
        int pi = partition(v, low, high);

        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

int main() {
        int n;
        cin >> n;
        vector <int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        quickSort(v, 0, n - 1);
        for (auto i : v)
            cout << i << ' ';
}
