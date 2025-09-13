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

node* head = NULL;

void insertEnd(int val) {
	node* newNode = new node(val);

	if (head == NULL) head = newNode;
	else {
		node* curr = head;
		while (curr->next != NULL) curr = curr->next;
		curr->next = newNode;
	}
}

void printLL() {
	if (head == NULL) cout << "Linked list is empty" << endl;
	else {
		node* curr = head;

		while (curr != NULL) {
			cout << curr->data << " ";
			curr = curr->next;
		}
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int t; cin >> t;
	while (t--) {
		int x; cin >> x;

		insertEnd(x);
	}

	printLL();

	return 0;
}