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

void insertPosVal(int pos, int val) {
	node* newNode = new node(val);

	if (head == NULL) head = newNode;
	else {
		node* curr = head;

		while (curr->data != pos && curr->next != NULL) curr = curr->next;

		if (curr->data == pos) {
			newNode->next = curr->next;
			curr->next = newNode;
		}
		else {
			cout << "Postion not found" << endl;
		}
	}
}

void printLL() {
	if (head == NULL) cout << "Linked list is empty" << endl;
	else {
		node* temp = head;

		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	head = new node(5);
	head->next = new node(7);
	printLL();

	int t; cin >> t;
	while (t--) {
		int pos, x; cin >> pos >> x;

		insertPosVal(pos, x);
		printLL();
	}
	printLL();

	return 0;
}