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

void insertPosIdx(int pos, int val) {
	node* newNode = new node(val);

	if (pos < 1) {
		cout << "Invalid position" << endl;
		return;
	}
	if (pos == 1) {
		newNode->next = head;
		head = newNode;
		return;
	}

	int cnt = 1;
	node* curr = head;

	while (cnt < pos - 1 && curr != NULL) {
		curr = curr->next;
		cnt++;
	}

	if (curr == NULL) {
		cout << "Position not found" << endl;
	} else {
		newNode->next = curr->next;
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

	head = new node(8);
	head->next = new node(9);
	printLL();

	int t; cin >> t;
	while (t--) {
		int pos, x; cin >> pos >> x;

		insertPosIdx(pos, x);
		printLL();
	}
	printLL();

	return 0;
}