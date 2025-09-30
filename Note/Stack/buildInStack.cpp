#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void print(stack<int> &st) {
	if(st.empty()) {
		cout << "Stack is empty" << endl;
		return;
	}

	stack<int> temp = st;
	while(!temp.empty()) {
		cout << temp.top() << " ";
		temp.pop();
	}
	cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	stack<int> st;

	st.push(5);
	st.push(1);
	st.push(7);
	st.push(3);
	print(st); 

	st.pop();
	st.pop();
	print(st);

	cout << "Stack peek: " << st.top() << endl;

    return 0;
}