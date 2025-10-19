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


node* insert(node* root, int val) {
    if(root == NULL) return new node(val);

    if(val < root->data) 
        root->left = insert(root->left, val);
    else 
        root->right = insert(root->right, val);

    return root; 
}

void inorder(node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

bool search(node* root, int val) {
    if(root == NULL) return 0;

    if(root->data == val) return 1;

    if(root->data > val) return search(root->left, val);
    
    if(root->data < val) return search(root->right, val);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    vector<int> arr = {1, 2, 4, 3, 2, 7, 6};
    node* root = NULL;

    for(int i = 0; i < arr.size(); i++) {
        root = insert(root, arr[i]);
    }
    inorder(root);
    cout << endl;
    
    if(search(root, 5)) cout << "Exist" << endl;
    else cout << "Not exist" << endl;

    return 0;
}