#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 10;
	int* ptr = &a;

	int** ptr2 = &ptr;

	cout << "Value of a: " << a << endl;
	cout << "Value of ptr(address of a): " << ptr << endl;
	cout << "Address of ptr: " << &ptr << endl;
	cout << "Value of ptr2(address of ptr): " << ptr2 << endl;
	cout << "Address of ptr2: " << &ptr2 << endl;

	return 0;
}