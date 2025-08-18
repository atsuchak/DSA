#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> vec = {1, 2, 3, 4, 6, 7};

	vector<int>::iterator it;

	it = vec.begin(); //print 1st val
	cout << *it << endl;

	it = vec.begin() + 2; //print 1+2 val
	cout << *it << endl;

	it = vec.end() - 1; //print lst el
	cout << *it << endl;

	for (it = vec.begin(); it != vec.end(); it++) cout << *it << " "; //print every el
	cout << endl;

	for (it = vec.begin(); it != vec.end(); it++) {
		if (*it == 4) *it = 7; // modify el
	}

	for (it = vec.begin(); it != vec.end(); it++) cout << *it << " "; //print every el
	cout << endl;

	for (it = vec.begin(); it != vec.end(); it++) {
		if (*it == 3) vec.erase(it); //remove el 3
	}

	for (it = vec.begin(); it != vec.end(); it++) cout << *it << " "; //print every el
	cout << endl;

	return 0;
}


/*
Topic:

	begin()
	end()
	erase()
	for(it = vec.begin(); it != vec.end(); it++)

*/