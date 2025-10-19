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

node* min_tree(node* root) {
    if(root != NULL) {
        while(root->left != NULL) root = root->left;
        return root;
    }
    return NULL;
}

node* max_tree(node* root) {
    if(root != NULL) {
        while(root->right != NULL) root = root->right;
        return root;
    }
    return NULL;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    vector<int> arr = {7, 2, 1, 3, 2, 4, 6};
    node* root = NULL;

    for(int i = 0; i < arr.size(); i++) {
        root = insert(root, arr[i]);
    }
    inorder(root);
    cout << endl;

    cout << min_tree(root)->data << endl;
    cout << max_tree(root)->data << endl;

    return 0;
}