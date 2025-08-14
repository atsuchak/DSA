#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &a, int n, int x) {
	int lo = 0 , hi = n - 1, mid = 0;

	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;

	while (lo <= hi) {
		mid = (lo + hi) / 2;
		if (x == a[mid]) return mid;
		else if (x > a[mid]) lo = mid + 1;
		else hi = mid - 1;
	}

	return -1;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	int x; cin >> x;

	cout << binarySearch(a, n, x);

	return 0;
}


/*
Time Complexity:

Best Case   :   O(1)
Worst Case  :   O(log(n);
Average Case:   O(log(n));
*/