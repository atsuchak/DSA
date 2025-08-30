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

void insertMiddle(int target, int val) {
	node* newNode = new node(val);

	node* temp = head;

	while (temp->data != target) {
		temp = temp->next;
	}

	newNode->next = temp->next;
	temp->next = newNode;
}

void printLL() {
	node* temp = head;

	if (head == nullptr) cout << "Linked List is empty";
	else {
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

	node* n1 = new node(2);
	node* n2 = new node(7);
	node* n3 = new node(9);
	node* n4 = new node(4);

	head = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	printLL();

	insertMiddle(2, 1);
	printLL();

	return 0;
}