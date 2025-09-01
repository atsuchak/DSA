#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int st, int mid, int end) {

	int i = st, j = mid + 1;
	vector<int> temp;

	while (i <= mid && j <= end) {
		if (a[i] <= a[j]) {
			temp.push_back(a[i]);
			i++;
		} else {
			temp.push_back(a[j]);
			j++;
		}
	}

	while (i <= mid) {
		temp.push_back(a[i]);
		i++;
	}

	while (j <= end) {
		temp.push_back(a[j]);
		j++;
	}

	for (int i = 0; i < temp.size(); i++)
		a[i + st] = temp[i];

}

void mergeSort(vector<int> &a, int st, int end) {

	if (st < end) {
		int mid = st + (end - st) / 2;

		mergeSort(a, st, mid);
		mergeSort(a, mid + 1, end);

		merge(a, st, mid, end);
	}
}

int main() {

	// int n = 7;

	vector<int> a{4, 9, 6, 2, 3, 7, 1};

	mergeSort(a, 0, a.size() - 1);

	for (int i : a) cout << i << " ";
	cout << endl;

	return 0;
}