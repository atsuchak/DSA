#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Stack {

	int arr[100];
public:
	int top = -1;

	bool isFull() {
		return top == 99;
	}

	bool isEmpty() {
		return top == -1;
	}

	void pushBack(int val) {
		if(isFull()) {
			cout << "Stack is full" << endl;
			return;
		}

		top++;
		arr[top] = val;
	}

	void popBack() {
		if(isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}

		top--;
	}

	int peek() {
		return arr[top];
	}

	void print() {
		if(isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}

		if(isFull()) {
			cout << "Stack is full" << endl;
			return;
		}

		for(int i = top; i >= 0; i--) {
			cout << arr[i] << " ";
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
	st.pushBack(8);
	st.pushBack(2);
	st.pushBack(3);
	st.print();

	st.popBack();
	st.popBack();
	st.print();

	cout << "Stack peek: " << st.peek() << endl;

	return 0;
}