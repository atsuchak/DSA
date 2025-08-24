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

	cout << "Value of a: " << a << endl;
	cout << "Address of a: " << ptr << endl;
	cout << "Dereference value of a: " << *(&a) << endl;	//val store in address
	cout << "Value stored in ptr: " << *ptr << endl;
	cout << "Value of ptr: " << ptr << endl;

	int** ptr2 = &ptr;

	cout << endl << "Value of ptr: " << ptr << endl;
	cout << "Dereference value of ptr: " << *ptr2 << endl;
	cout << "Dereference value of ptr of ptr: " << **ptr2 << endl;


	return 0;
}