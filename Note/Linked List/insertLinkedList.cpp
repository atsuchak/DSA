#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

struct Node {
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = nullptr;
	}
};

Node* head = nullptr;

void insertAtBegin(int val) {
	Node* NewNode = new Node(val);
	NewNode->next = head;
	head = NewNode;
}

void insertAtLast(int val) {
	Node* NewNode = new Node(val);
	Node* temp = head;

	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = NewNode;
}

void insertAtPositionByVal(int target, int val) {
	Node* NewNode = new Node(val);

	if (head == nullptr) return;

	Node* temp = head;
	while (temp != nullptr && temp->data != target) temp = temp->next;

	if (temp == nullptr) cout << "Target not found" << endl;
	else {
		NewNode->next = temp->next;
		temp->next = NewNode;
	}
}

void insertAtPositionByIndex(int pos, int val) {
	Node* NewNode = new Node(val);

	if (head == nullptr) return;
	if (pos < 1) cout << "Invalid position" << endl;
	if (pos == 1) {
		Node* NewNode = new Node(val);
		NewNode->next = head;
		head = NewNode;
		return;
	}

	Node* temp = head;
	int cnt = 1;

	while (temp != nullptr && cnt < pos - 1) {
		temp = temp->next;
		cnt++;
	}

	if (temp == nullptr) cout << "Out of bound index" << endl;
	else {
		NewNode->next = temp->next;
		temp->next = NewNode;
	}
}

void printLL() {
	Node* temp = head;

	if (head == nullptr) {
		cout << "Linked list is empty" << endl;
		return;
	}

	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	insertAtBegin(6);
	insertAtBegin(7);
	printLL();

	insertAtLast(3);
	insertAtLast(1);
	insertAtLast(0);
	printLL();

	insertAtPositionByVal(1, 5);
	insertAtPositionByVal(0, 9);
	printLL();

	insertAtPositionByVal(8, 3);
	printLL();

	insertAtPositionByIndex(4, 8);
	printLL();

	insertAtPositionByIndex(10, 3);
	printLL();


	return 0;
}