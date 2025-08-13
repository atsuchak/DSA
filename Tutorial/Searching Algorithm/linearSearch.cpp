#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &a, int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) return 1;
	}
	return 0;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	int x; cin >> x;

	if (linearSearch(a, n, x)) cout << "Found";
	else cout << "Not Found";

	return 0;
}


/*
Time Complexity:

Best Case: O(1)
Worst Case: O(n);
Average Case: All case/ number of case
			= (1+2+...+n)/n
			= (n(n+1)/2)/n
			= (n+1)/2
*/