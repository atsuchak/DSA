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

void deleteEnd() {
	if (head == nullptr) return;

	node* cur = head;
	node* prev = nullptr;

	while (cur->next != nullptr) {
		prev = cur;
		cur = cur->next;
	}

	if (prev != nullptr) prev->next = nullptr;
	else head = nullptr;

	delete cur;
}

void printLL() {
	if (head == nullptr) cout << "empty" << endl;

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

	head = new node(5);
	head->next = new node(2);
	head->next->next = new node(7);
	head->next->next->next = new node(1);
	head->next->next->next->next = new node(2);
	head->next->next->next->next->next = new node(6);

	printLL();
	deleteEnd();
	printLL();

	return 0;
}