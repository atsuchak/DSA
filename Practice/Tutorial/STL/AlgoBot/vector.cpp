//Comment out perticular part for test

#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> a(5); // init 5 size vector
	vector<int> b; // init vector without size
	vector<int> c(5, 0); // init 5 size vector with el of 0
	vector<int> d = {3, 4, 5, 2, 1}; //init vec with val
	vector<int> e{5, 2, 6, 4, 2}; //same as previous one

	// for (int i = 0; i < 5; i++) cin >> a[i]; //intput vector

	// for (int i = 0; i < 5; i++) {
	// 	int x; cin >> x;
	// 	b.push_back(x);	//input non declare size vector
	// }

	c.resize(7); //resize vector
	a.assign(2, 4); //assign val 4 to index 2

	b.push_back(3);
	b.push_back(1);
	b.push_back(6);
	b.push_back(5);  //add el to last index

	for (int i = 0; i < b.size(); i++) cout << b[i] << " "; //print vector
	cout << endl;

	b.pop_back(); //remove el from last index

	cout << b.size() << endl; //vec size

	cout << b.front() << endl; //get 1st el
	cout << b.back() << endl;  //get lst el

	b.clear(); //clear all el from vec

	for (int i = 0 ; i < b.size(); i++) cout << b[i] << " ";

	return 0;
}


/*
Topic:

	push_back
	pop_back
	size()
	front()
	back()
	resize()
	clear()

*/