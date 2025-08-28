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

void insertMiddle(int t, int val) {

	if (t < 1) {
		cout << "Invalid Position" << endl;
		return;
	}

	int cnt = 1;
	node* temp = head;

	while (temp != nullptr && cnt < t - 1) {
		temp = temp->next;
		cnt++;
	}

	node* newNode = new node(val);
	node* temp2 = temp->next;
	temp->next = newNode;
	newNode->next = temp2;

}

void printLL() {
	if (head == nullptr) {
		cout << "Linked List is empty" << endl;
		return;
	}

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

	head = new node(1);
	head->next = new node(9);
	head->next->next = new node(5);
	head->next->next->next = new node(2);

	cout << "Before insert: ";
	printLL();

	cout << "After insert: ";
	insertMiddle(5, 3);
	insertMiddle(4, 8);
	printLL();

	return 0;
}