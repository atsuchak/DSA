#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void selection_sort(vector<int> &a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int sEl = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[sEl])
                sEl = j;
        }
        swap(a[i], a[sEl]);
    }
}

void insertion_sort(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int prev = i - 1;

        while (prev >= 0 && a[prev] > key)
        {
            a[prev + 1] = a[prev];
            prev--;
        }

        a[prev + 1] = key;
    }
}

void countingSort(vector<int> &a, int n) {
    int maxEl = *max_element(a.begin(), a.end());
    maxEl++;

    vector<int> store(maxEl, 0);
    for (int i = 0; i < n; i++) store[a[i]]++;

    for (int i = 1; i < maxEl; i++) store[i] = store[i - 1] + store[i];

    vector<int> output(n);
    for (int i = n - 1; i >= 0; i--) output[--store[a[i]]] = a[i];

    for (int i = 0 ; i < n; i++) a[i] = output[i];
}

int partition(vector<int> &a, int p, int r) {
    int x = a[r], i = p - 1;

    for (int j = p; j < r; j++) {
        if (a[j] <= x) {
            i++;
            swap(a[j], a[i]);
        }
    }

    i++;
    swap(a[i], a[r]);
    return i;
}

void quickSort(vector<int> &a, int p, int r) {
    if (p < r) {
        int q = partition(a, p, r);

        quickSort(a, p, q - 1);
        quickSort(a, q + 1, r);
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

    // int n = 7;
    // vector<int> a = {4, 1, 2, 5, 2, 3, 0};

    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // bubble_sort(a, n);
    // selection_sort(a, n);
    // insertion_sort(a, n);
    // countingSort(a, n);
    quickSort(a, 0, n - 1);

    print(a, n);

    return 0;
}