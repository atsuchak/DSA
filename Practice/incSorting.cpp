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

void countingSort(vector<int> &a, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if (a[i] > max)
            max = a[i];
    }
        

    vector<int> store(max+1, 0);

    for (int i = 0; i < n; i++)
        store[a[i]]++;

    for(int i = 1; i <= max; i++) store[i] += store[i-1];

    vector<int> result(n);

    for(int i = n-1; i >=0; i--) {
        result[--store[a[i]]] = a[i];
    }

    for(int i = 0; i < n; i++) {
        a[i] = result[i];
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

    int n = 7;
    vector<int> a = {4, 1, 2, 5, 2, 3, 0};

    // bubble_sort(a, n);
    // selection_sort(a, n);
    // insertion_sort(a, n);
    countingSort(a, n);

    print(a, n);

    return 0;
}