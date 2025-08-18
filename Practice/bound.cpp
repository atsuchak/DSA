#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &a, int n, int x) {
	int lo = 0, hi = n - 1, ans = x;

	while (lo <= hi) {
		int mid = (lo + hi) / 2;

		if (x == a[mid]) return mid;
		else if (x < a[mid]) hi = mid - 1;
		else lo = mid + 1;
	}
	return -1;
}

int lowerBoundSearch(vector<int> &a, int n, int x) {
	int lo = 0, hi = n - 1, ans = x;

	while (lo <= hi) {
		int mid = (lo + hi) / 2;

		if (x <= a[mid]) {
			ans = mid;
			hi = mid - 1;
		}
		else lo = mid + 1;
	}

	return ans;
}

int upperBoundSearch(vector<int> &a, int n, int x) {
	int lo = 0, hi = n - 1, ans = x;

	while (lo <= hi) {
		int mid = (lo + hi) / 2;

		if (x < a[mid]) {
			ans = mid;
			hi = mid - 1;
		}
		else lo = mid + 1;
	}

	return ans;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0 ; i < n ; i++) cin >> a[i];

	int x; cin >> x;

	cout << "Binary: " << binarySearch(a, n, x) << endl;
	cout << "Lower: " << lowerBoundSearch(a, n, x) << endl;
	cout << "Upper: " << upperBoundSearch(a, n, x) << endl;


	return 0;
}