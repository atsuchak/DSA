#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &vec, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (vec[j] > vec[j + 1])
                swap(vec[j], vec[j + 1]);
        }
    }
}

int main()
{

    int n = 5;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    bubble_sort(vec, n);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}