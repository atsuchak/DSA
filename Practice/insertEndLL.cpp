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

void insertEnd(int val) {
	node* newNode = new node(val);

	if (head == nullptr) {
		head = newNode;
		return;
	}

	node* temp = head;

	while (temp->next != nullptr) temp = temp->next;

	temp->next = newNode;
}

void printLL() {
	if (head == nullptr) {
		cout << "Linked list is empty" << endl;
		return;
	}
	node* temp = head;

	cout << "Linked List: ";
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	insertEnd(5);
	insertEnd(2);
	printLL();

	insertEnd(1);
	insertEnd(8);
	printLL();

	return 0;
}