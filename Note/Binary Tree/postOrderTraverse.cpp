#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

struct node {
	int data;
	node* left; 
	node* right;

	node(int val) {
		data = val;
		left = right = NULL;
	}
};

int idx = -1;

node* buildTree(vector<int> &a) {
	idx++;

	if(a[idx] == -1) return NULL;

	node* newNode = new node(a[idx]);
	newNode->left = buildTree(a);
	newNode->right = buildTree(a);

	return newNode;
}

void postOrderTraverse(node* root) {

	if(root == NULL) return;

	postOrderTraverse(root->left);
	postOrderTraverse(root->right);
	cout << root->data << " ";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

	// int n; cin >> n; 

	// vector<int> a(n);
	// for(int i = 0; i < n; i++) cin >> a[i];

	vector<int> a = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

	node* root = buildTree(a);
	postOrderTraverse(root);

    return 0;
}