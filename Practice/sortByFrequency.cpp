#include <bits/stdc++.h>
using namespace std;

void sortByFrec(vector<int> &a, int n) {

	int maxEl = *max_element(a.begin(), a.end());
	maxEl++;

	vector<int> store(maxEl, 0);
	for (int i = 0; i < n; i++) store[a[i]]++;



	vector<int> output;
	for ( ; ; ) {
		int maxFrec = 0;
		int index = -1;

		for (int i = 0; i < maxEl; i++) {
			if (store[i] > maxFrec) {
				maxFrec = store[i];
				index = i;
			}
		}

		for (int i = 0; i < maxFrec; i++) output.push_back(index);
		store[index] = 0;

		if (maxFrec == 0) break;

	}

	for (int i = 0; i < maxEl; i++) cout << i << " ";
	cout << endl;
	for (int i = 0; i < maxEl; i++) cout << store[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++) cout << output[i] << " ";
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0 ; i < n; i++) cin >> a[i];

	sortByFrec(a, n);

	return 0;
}