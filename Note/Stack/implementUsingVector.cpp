#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Stack {
	vector<int> vec;

public: 
	bool isEmpty() {
		return vec.size() == 0;
	}

	void pushBack(int val) {
		vec.push_back(val);
	}

	void popBack() {
		if(isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}

		vec.pop_back();
	}

	int peek() {

		if(isEmpty()) {
			cout << "Stack is empty" << endl;
			return -1;
		}

		return vec[vec.size()-1];
	}

	void print() {	
		for(int i = vec.size()-1; i >= 0; i--) {
			cout << vec[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	Stack st;

	// int t; cin >> t;
	// for(int i = 0; i < t; i++){
	// 	int n; cin >> n;
	// 	st.pushBack(n);
	// }


	st.pushBack(6);
	st.pushBack(1);
	st.pushBack(8);
	st.pushBack(3);
	st.print();

	st.popBack();
	st.popBack();
	st.print();

	cout << "Stack peek: " << st.peek() << endl;

	return 0;
}