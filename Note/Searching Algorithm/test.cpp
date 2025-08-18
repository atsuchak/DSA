#include<bits/stdc++.h>
using namespace std;

int lowerBoundSearch(vector<int> &a, int n, int x) {
	int lo = 0 , hi = n - 1, mid = x, ans;

	while (lo <= hi) {
		mid = (lo + hi) / 2;
		if (x <= a[mid]) {
			ans = mid;
			hi = mid - 1;
		}
		else lo = mid + 1;
	}
	return ans;
}

int uppperBoundSearch(vector<int> &a, int n, int x) {
	int lo = 0 , hi = n - 1, mid = x, ans;

	while (lo <= hi) {
		mid = (lo + hi) / 2;
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
	for (int i = 0; i < n; i++) cin >> a[i];

	int x; cin >> x;

	cout << lowerBoundSearch(a, n, x);
	cout << endl;
	cout << uppperBoundSearch(a, n, x);

	return 0;
}


/*
Time Complexity:

Best Case   :   O(1)
Worst Case  :   O(log(n);
Average Case:   O(log(n));
*/