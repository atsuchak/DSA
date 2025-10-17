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

  deque<int> dq;

  dq.push_back(6);
  dq.push_back(8);
  dq.push_back(2);

  dq.push_front(9);

  cout << "Front: " << dq.front() << " Back: " << dq.back() << endl;

  dq.pop_back(); 

  cout << "Front: " << dq.front() << " Back: " << dq.back() << endl;

  return 0;
}