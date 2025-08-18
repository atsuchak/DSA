#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &vec, int n) {

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (vec[j] > vec[j + 1])
                swap(vec[j], vec[j + 1]);
        }
    }
}

void printArray(vector<int> &vec, int n) {
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
}

int main() {

    int n = 5;
    vector<int> vec = {4, 5, 6, 1, 3};

    bubble_sort(vec, n);
    printArray(vec, n);

    return 0;
}