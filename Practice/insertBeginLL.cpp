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

void insertBegin(int val) {
	node* newNode = new node(val);
	newNode->next = head;
	head = newNode;
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

	insertBegin(5);
	insertBegin(3);
	printLL();

	insertBegin(5);
	insertBegin(8);
	insertBegin(8);
	printLL();


	return 0;
}