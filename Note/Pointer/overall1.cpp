#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 5;
	int* p = &a;
	int** q = &p;

	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "q = " << q << endl;
	cout << "*q = " << *q << endl;
	cout << "**q = " << **q << endl;

	return 0;
}