#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

struct node {
	int data;
	node* next;

	node(int val) {
		data = val;
		next = NULL;
	}
};

class Queue {
	node* head;
	node* tail;

public:

	Queue() {
		head = tail = NULL;
	}

	bool empty() {
		return head == NULL;
	}

	void push(int val) {
		node* newNode = new node(val);

		if(head == NULL) head = tail = newNode;
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	void pop() {
		if(empty()) {
			cout << "Queue empty\n";
			return;
		}
		else {
			node* temp = head; 
			head = head->next;

			delete temp;
		}
	}

	int front() {
		if(empty()) {
			cout << "Queue empty\n";
			return -1;
		}
		return head->data;
	}
};

void print(Queue &q) {
	while(!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  freopen("D:/Sublime file/input.txt", "r", stdin);
  freopen("D:/Sublime file/output.txt", "w", stdout);

  Queue q;

  // q.push(5);
  // q.push(8);
  // q.push(2);
  // print(q);

  q.pop();
  print(q);

  cout << q.front();

  return 0;
}