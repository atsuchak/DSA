#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[] = {10, 20, 30, 40};
	int* ptr = arr;

	cout << "*(ptr + 1): " << *(ptr + 1) << endl;
	cout << "*(ptr + 3): " << *(ptr + 3) << endl;
	ptr++;
	cout << "*ptr: " << *ptr << endl;

	return 0;
}