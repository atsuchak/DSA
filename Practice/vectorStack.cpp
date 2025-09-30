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

	void push(int val) {
		vec.push_back(val);
	}
	
	void pop() {
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
		if(isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}
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

	int n; cin >> n;

	for(int i = 0; i < n; i++) {
		int x; cin >> x;

		st.push(x);
	}

	// st.push(6);
	// st.push(2);
	// st.push(7);
	// st.push(1);
	st.print();

	st.pop();
	st.pop();
	st.print();

	cout << "Stack peek: " << st.peek() << endl;

    return 0;
}