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

void insertAtPositionByVal(int target, int val) {
	node* newNode = new node(val);

	if (head == nullptr) return;

	node* temp = head;

	while (temp != nullptr && temp->data != target) temp = temp->next;

	if (temp == nullptr) cout << "Target not found\n";
	else {
		newNode->next = temp->next;
		temp->next = newNode;
	}

}

void printLL() {
	if (head == nullptr) cout << "Linked List is empty" << endl;
	else {
		node* temp = head;
		while (temp != nullptr) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	head = new node(5);
	// head->next = new node(4);
	// head->next->next = new node(9);
	// printLL();

	insertAtPositionByVal(5, 8);
	printLL();
	insertAtPositionByVal(3, 2);
	printLL();
	insertAtPositionByVal(9, 3);
	printLL();


	return 0;
}