#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int partition(vector<int> &a, int p, int r) {
	int pivot = a[r], i = p - 1;

	for (int j = p; j < r; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[i], a[j]);
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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> a{5, 3, 6, 3, 1, 9, 8};
	quickSort(a, 0, a.size() - 1);

	for (int it : a) cout << it << " ";
	cout << endl;


	return 0;
}