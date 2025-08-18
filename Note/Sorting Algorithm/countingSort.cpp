#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void countSort(vector<int> &a, int n) {

    int maxEl = *max_element(a.begin(), a.end());
    maxEl++;

    vector<int> store(maxEl, 0);

    for (int i = 0; i < n; i++) {
        store[a[i]]++;
    }

    for (int i = 1; i < maxEl; i++) {
        store[i] += store[i - 1];
    }

    vector<int> result(n);

    for (int i = n - 1; i >= 0; i--) {
        result[--store[a[i]]] = a[i];
    }

    for (int i = 0 ; i < n; i++) a[i] = result[i];

    printArr(a, a.size());
}

int main() {

    int n = 8;
    vector<int> a = {4, 1, 6, 2, 4, 8, 5, 3};

    countSort(a, n);

    return 0;
}