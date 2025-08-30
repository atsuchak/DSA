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

void insertLast(int val) {
	node* newNode = new node(val);

	if (head == nullptr) head = newNode;
	else {

		node* temp = head;
		while (temp->next != nullptr) temp = temp->next;
		temp->next = newNode;
	}

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

	insertLast(5);
	insertLast(8);
	insertLast(8);
	insertLast(2);
	insertLast(6);

	printLL();

	insertLast(5);
	insertLast(8);
	insertLast(8);

	printLL();

	return 0;
}