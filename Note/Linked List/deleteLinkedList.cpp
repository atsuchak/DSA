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

void deleteBegin() {
	node* temp = head;

	if (head == nullptr) return;
	head = head->next;
	delete temp;
}

void deleteEnd() {
	if (head == nullptr) return;

	node* temp = head;
	node* prev = nullptr;

	while (temp->next != nullptr) {
		prev = temp;
		temp = temp->next;
	}

	if (prev != nullptr) prev->next = nullptr;
	else head = nullptr;

	delete temp;
}

void printLL() {
	if (head == nullptr) cout << "Linked List is empty";
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
	head->next = new node(9);
	head->next->next = new node(7);
	head->next->next->next = new node(2);
	head->next->next->next->next = new node(1);
	printLL();

	deleteBegin();
	printLL();
	deleteBegin();
	printLL();

	deleteEnd();
	printLL();
	deleteEnd();
	printLL();



	return 0;
}