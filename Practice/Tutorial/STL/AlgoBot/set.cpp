#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	set<int> s; //init set
	set<int, greater<int>> st; //init set with decending order
	set<int>::iterator it;

	s.insert(4);  //assign val of set
	s.insert(3);
	s.insert(7);
	s.insert(4);
	s.insert(1);

	st.insert(4);  //assign val of set
	st.insert(3);
	st.insert(7);
	st.insert(4);
	st.insert(1);

	for (it = s.begin(); it != s.end(); it++) cout << *it << " "; //set not take duplicate el
	// assign ascending order automatically
	cout << endl;

	for (it = st.begin(); it != st.end(); it++) cout << *it << " "; //set not take duplicate el
	// assign decending order automatically
	cout << endl;

	for (it = s.begin(); it != s.end(); it++) {
		if (*it == 3) {
			it = s.erase(it); //erase an el
		}
	}

	for (it = s.begin(); it != s.end(); it++) cout << *it << " ";
	cout << endl;

	cout << s.size() << endl; //size of the set

	s.clear(); //clear the set

	for (it = s.begin(); it != s.end(); it++) cout << *it << " ";

	return 0;
}


/*
Topic:

	insert()
	erase()
	clear()

*/