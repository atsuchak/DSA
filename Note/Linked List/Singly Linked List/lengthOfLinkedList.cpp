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

int lengthOfLL() {
	int cnt = 0;
	node* temp = head;

	while (temp != nullptr) {
		cnt++;
		temp = temp->next;
	}

	return cnt;
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

	cout << "Length of LL: " << lengthOfLL() << endl;

	return 0;
}