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
		next = nullptr;
	}
};

node* head = nullptr;

void insertAtPositionByIdx(int pos, int val) {
	node* newNode = new node(val);

	if (head == nullptr) return;
	if (pos < 1) cout << "Invalid Position" << endl;
	if (pos == 1) {
		node* newNode = new node(val);
		newNode->next = head;
		head = newNode;
		return;
	}

	node*temp = head;
	int cnt = 1;

	while (temp != nullptr && cnt < pos - 1) {
		temp = temp->next;
		cnt++;
	}

	if (temp == nullptr) cout << "Pos is out of size\n";
	else {
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

void printLL() {
	if (head == nullptr) cout << "Linked List is empty";

	node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	head = new node(5);
	// head->next = new node(4);
	// head->next->next = new node(9);
	printLL();

	insertAtPositionByIdx(1, 8);
	printLL();
	insertAtPositionByIdx(3, 2);
	printLL();
	insertAtPositionByIdx(9, 3);
	printLL();


	return 0;
}