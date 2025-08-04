#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] < a[j + 1])
                swap(a[j], a[j + 1]);
}

void selection_sort(vector<int> &a, int n) {
    for(int i = 0; i < n-1; i++) {
        int sEl = i;
        for(int j = i+1; j < n; j++) {
            if(a[j] > a[sEl]) sEl = j;
        }
        swap(a[i], a[sEl]);
    }
}

void insertion_sort(vector<int> &a, int n) {
    for(int i = 1; i < n; i++) {
        int key = a[i];
        int prev = i-1;

        while(prev >= 0 && a[prev] < key) {
            a[prev+1] = a[prev];
            prev--;
        }

        a[prev+1] = key;
    }
}

void print(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{

    int n = 5;
    vector<int> a = {4, 1, 5, 2, 3};

    bubble_sort(a, n);
    // selection_sort(a, n);
    // insertion_sort(a, n);

    print(a, n);

    return 0;
}