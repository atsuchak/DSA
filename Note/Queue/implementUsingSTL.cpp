#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("D:/Sublime file/input.txt", "r", stdin);
  freopen("D:/Sublime file/output.txt", "w", stdout);

  queue<int> q;

  q.push(6);
  q.push(9);
  q.push(2);

  q.pop();

  cout << "Queue front: " << q.front() << endl;

  while(!q.empty()) {
  	cout << q.front() << " ";
  	q.pop();
  } 

  return 0;
}