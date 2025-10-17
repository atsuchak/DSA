#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

void stockSpan(vector<int> &a) {
	vector<int> ans;
	stack<int> st;

	for(int i = 0; i < a.size(); i++) {

		while(!st.empty() && a[st.top()] <= a[i]) st.pop();

		if(st.empty()) ans.push_back(i+1);
		else ans.push_back(i - st.top());

		st.push(i);
	}

	for(int it: ans) cout << it << " ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	int n; cin >> n;

	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	stockSpan(a); 

    return 0;
}