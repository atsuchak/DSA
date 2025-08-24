#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	//increment
	int a = 10;

	int* ptr = &a;
	cout << "Val of ptr(Before increment): " << ptr << endl;

	ptr++;	//increase by 4 byte
	cout << "Val of ptr(After increment): " << ptr << endl;

	cout << endl;

	//decrement
	long long b = 15;

	long long* llptr = &b;
	cout << "Val of llptr(Before decrement): " << llptr << endl;

	llptr--;	//decrease by 8 byte
	cout << "Val of llptr(After decrement): " << llptr << endl;

	cout << endl;

	//Add/subtrac
	ptr = ptr - 4;	//increase by 4*4 = 16 byte
	cout << "Val of ptr(After subtract 4*4 byte): " << ptr << endl;

	llptr = llptr + 3;	//increase by 8*3 = 24 byte
	cout << "Val of llptr(After add 3*8 byte): " << llptr << endl;

	cout << endl;

	int arr[] = {1, 2, 3, 4, 5};

	cout << "*arr: " << *arr << endl;
	cout << "*arr++(increase 4 byte): " << *(arr + 1) << endl;

	cout << endl;

	int* ptr0;
	int* ptr1 = ptr0 + 2;

	cout << "ptr0: " << ptr0 << endl;
	cout << "ptr1: " << ptr1 << endl;
	cout << "ptr1 - ptr0: " << ptr1 - ptr0 << endl;	//return total int size

	cout << endl;

	//compare
	cout << "Compare ptr1 and ptr2";
	cout << "(ptr1 < ptr0): " << (ptr1 < ptr0) << endl;


	return 0;
}