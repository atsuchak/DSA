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

void insertAtBegining (int val) {
	node* newNode = new node(val);

	newNode->next = head;
	head = newNode;
}

void insertAtEnding(int val) {
	node* newNode = new node(val);

	if (head == NULL) head = newNode;
	else {
		node* prev = head;

		while (prev->next != NULL) prev = prev->next;
		prev->next = newNode;
	}
}

void insertAtPosition(int target, int val) {
	// node* newNode = new node(val);

	// if (head == NULL) return;

	// node*temp = head;
	// while (temp != NULL && temp->data != target) {
	// 	temp = temp->next;
	// }

	// if (temp == NULL) cout << "Target not found\n";
	// else {
	// 	newNode->next = temp->next;
	// 	temp->next = newNode;
	// }

	node* newItem = new node(val);

	node* current = head;

	while (current->data != target)
	{
		current = current->next;
	}

	newItem->next = current->next;
	current->next = newItem;


}


void printLL() {
	if (head == NULL) cout << "Linked List is empty";
	else {
		node* temp = head;

		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	// insertAtBegining(7);
	// insertAtBegining(3);
	// insertAtBegining(8);
	// printLL();

	// insertAtBegining(1);
	// insertAtBegining(4);
	// printLL();


	// insertAtEnding(7);
	// insertAtEnding(3);
	// insertAtEnding(8);
	// printLL();

	// insertAtEnding(1);
	// insertAtEnding(4);
	// printLL();

	head = new node(2);
	head->next = new node(4);
	head->next->next = new node(3);
	head->next->next->next = new node(2);
	printLL();

	insertAtPosition(4, 9);
	printLL();

	insertAtPosition(3, 4);
	printLL();



	return 0;
}