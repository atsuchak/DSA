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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    node* root = NULL;

    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 1);
    root = insert(root, 8);
    root = insert(root, 6);

    inorder(root);
    cout << endl;

    return 0;
}