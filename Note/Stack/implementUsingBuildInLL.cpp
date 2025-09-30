#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Stack {
	list<int> ll;

public:
	bool isEmpty() {
		return ll.size() == 0;
	}

	void push(int val) {
		ll.push_front(val);
	}

	void pop() {
		ll.pop_front();
	}

	int peek() {
		if(isEmpty()) {
			cout << "Linked list is empty" << endl;
			return -1;
		}
		return ll.front();
	}

	void print() {
		if(isEmpty()) {
			cout << "Linked list is empty" << endl;
			return;
		}

		for(int it : ll) cout << it << " ";
		cout << endl;
	}
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	Stack st;

	// int n; cin >> n;

	// for(int i = 0; i < n; i++) {
	// 	int x; cin >> x;
	// 	st.push(x);
	// }

	st.push(4);
	st.push(9);
	st.push(1);
	st.push(3);
	st.print();

	st.pop();
	st.pop();
	st.print();

	cout << "Stack peek: " << st.peek() << endl;

    return 0;
}