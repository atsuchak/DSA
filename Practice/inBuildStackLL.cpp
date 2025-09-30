#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void print(stack<int> st) {
	while(!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    stack<int> st;
	list<int> ll;

	ll.push_front(11);
	ll.push_front(18);
	ll.push_front(31);
	ll.push_front(14);

	reverse(ll.begin(), ll.end());

	for(int it: ll) st.push(it);

	print(st);

	st.pop();
	st.pop();

	print(st);

	cout << "Stack peek: " << st.top();

	// while(!st.empty()) {
	// 	cout << st.top() << " ";
	// 	st.pop();
	// }


    return 0;
}