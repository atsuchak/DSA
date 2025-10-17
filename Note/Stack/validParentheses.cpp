#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

bool validParentheses(string st) {
	string temp;
	stack<char> s;

	for(char it: st) 
		if(it == '(' || it == ')' || it == '{' || it == '}' || it == '[' || it == ']') temp.push_back(it);

	for(char it: temp) {
		if(it == '(' || it == '{' || it == '[') s.push(it);
		else if (it == ')' || it == '}' || it == ']'){
			if(s.empty()) return 0;
			else {
				if(s.top() == '(' && it == ')'
					|| s.top() == '{' && it == '}'
					|| s.top() == '[' && it == ']') s.pop();
					else return 0;
			}
		}
	}

	return s.empty();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	string st; cin >> st;

	if(validParentheses(st)) cout << "Valid Parentheses" << endl;
	else cout << "Not a Valid Parentheses" << endl; 

	return 0;
}