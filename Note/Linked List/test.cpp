#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

struct node {
	int data;
	node* next;
};

node* head = nullptr;

void insertBegin(int val) {
	node* newNode = new node;

	newNode->data = val;
	newNode->next = head;
	head = newNode;
}

void printLL() {
	node* temp = head;

	if (head = nullptr) {
		cout << "LinkedList is empty" << endl;
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

	insertBegin(4);
	insertBegin(2);
	insertBegin(7);
	insertBegin(5);
	insertBegin(9);

	printLL();


	return 0;
}