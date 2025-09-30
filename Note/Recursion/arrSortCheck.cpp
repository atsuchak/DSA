#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

bool isSort(vector<int> &a, int n) {
	if(n == 0 || n == 1) return true;

	return a[n-1] >= a[n-2] && isSort(a, n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	// int n; cin >> n;

	// vector<int> a(n);
	// for(int i = 0; i < n; i++) cin >> a[i];

	vector<int> a = {2, 3, 8, 7, 9}; 

	if(isSort(a, a.size())) cout << "Array is sorted" << endl;
	else cout << "Array is unsorted" << endl;

    return 0;
}