#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Stack {
	int arr[100];
	int top;

public: 
	Stack() {
		top = -1;
	}

	bool isEmpty() {
		return top == -1;
	}

	bool isFull() {
		return top == 99;
	}

	void push(int val) {
		if(isFull()) {
			cout << "Stack is full" << endl;
			return;
		}
		top++;
		arr[top] = val;
	}

	void pop() {
		if(isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}
		top--;
	}

	int peek() {
		if(isEmpty()) {
			cout << "Stack is empty" << endl;
			return -1;
		}
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

	int n; cin >> n;

	for(int i = 0; i < n; i++) {
		int x; cin >> x;

		st.push(x);
	}

	// st.push(3);
	// st.push(5);
	// st.push(6);
	// st.push(9);
	st.print();

	st.pop();
	st.pop();
	st.print();

	cout << "Stack peek: " << st.peek() << endl;

    return 0;
}