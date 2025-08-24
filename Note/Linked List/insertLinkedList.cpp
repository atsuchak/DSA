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

	insertAtBegin(9);
	insertAtBegin(2);
	printLL();

	insertAtLast(3);
	insertAtLast(1);
	insertAtLast(2);
	insertAtLast(0);
	printLL();


	return 0;
}