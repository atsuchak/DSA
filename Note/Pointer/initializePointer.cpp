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

	double db = 54.34;
	double* dbPtr = &db;

	cout << "Value of a: " << a << endl;
	cout << "Address of a: " << &a << endl;
	cout << "Value of ptr(address of a): " << ptr << endl;
	cout << "Address of ptr: " << &ptr << endl;

	return 0;
}