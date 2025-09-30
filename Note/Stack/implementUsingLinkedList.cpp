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

class Stack {
	node* head;

	public:

		Stack() {
			head = NULL;
		}

		bool isEmpty() {
			return head == NULL;
		}

		void push(int val) {
			node* newNode = new node(val);

			newNode->next = head;
			head = newNode;
		}

		void pop() {
			if(head == NULL) {
				cout << "Linked list empty" << endl;
				return;
			}

			node* temp = head;
			head = head->next;
			delete temp;
		}

		int peek() {
			if(head == NULL) {
				cout << "Linked list is empty" << endl;
				return -1;
			}

			return head->data;
		}

		void print() {
			if(head == NULL) {
				cout << "Linked list is empty" << endl;
				return;
			}
			node* temp = head;

			while(temp != NULL) {
				cout << temp->data << " ";
				temp = temp->next;
			}
			cout << endl;
		}

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	Stack st;

	int n; cin >> n;

	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		st.push(x);
	}

	// st.push(6);
	// st.push(9);
	// st.push(2);
	// st.push(1);
	st.print();

	st.pop();
	st.pop();
	st.print();

	cout << "Stack peek: " << st.peek() << endl;

    return 0;
}