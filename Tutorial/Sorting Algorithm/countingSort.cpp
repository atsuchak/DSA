#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void countSort(vector<int> &a, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i] + 1;
    }

    vector<int> vec(max, 0);

    for (int i = 0; i < n; i++)
    {
        vec[a[i]]++;
    }

    for (int i = 1; i < max; i++)
    {
        vec[i] += vec[i - 1];
    }

    vector<int> result(n);

    for (int i = n - 1; i >= 0; i--)
    {
        result[--vec[a[i]]] = a[i];
    }

    printArr(result, result.size());
}



int main()
{

    int n = 8;
    vector<int> a = {4, 3, 6, 2, 3, 8, 5, 3};

    countSort(a, n);

    return 0;
}