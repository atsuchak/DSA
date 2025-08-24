#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int** ptr;

	cout << "Before Null pointer: " << ptr << endl;

	ptr = nullptr;	//to avoid garbage values

	cout << "After Null pointer: " << ptr << endl;

	return 0;
}