#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

bool isValid(string st) {
	stack<char> stk;
	bool check = 0;

	for(int i = 0; i < st.size(); i++) {
		if(st[i] == '(' || st[i] == '{' || st[i] == '[') stk.push(st[i]);
		else if(st[i] == ')' || st[i] == '}' || st[i] == ']') {
			if(stk.empty()) return 0;
			else {
				if(stk.top() == '(' && st[i] == ')'
					|| stk.top() == '{' && st[i] == '}'
					|| stk.top() == '[' && st[i] == ']') stk.pop();
					else return 0;
			}
		}
	}

	return stk.empty();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	string st; cin >> st;

	string temp;

	for(char it: st) 
		if(it == '(' || it == ')' 
			|| it == '{' || it == '}' 
			|| it == '[' || it == ']') 
			temp.push_back(it);

		if(isValid(temp)) cout << "Valid parentheses" << endl;
		else cout << "Invalid parentheses" << endl;

			// if(stk.empty() && check) cout << "Valid parentheses" << endl;
			// else cout << "Invalid parentheses" << endl;

		return 0;
	}