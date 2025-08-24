#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void passByVal(int a) {
	a = 20;
}

void passByPointer(int* a) {	//throu pointer
	*a = 20;
}

void passByRef(int &b) {	//throw reference
	b = 30;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = 10;

	passByVal(a);
	cout << "Val of a(pass by val): " << a << endl;

	passByPointer(&a);
	cout << "Val of a(pass by pointer): " << a << endl;

	passByRef(a);
	cout << "Val of a(pass by refference): " << a << endl;

	return 0;
}