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

node* deleteBST(node* root, int val) {
    if(root == NULL) return 0;

    if(root->data > val) {
        root->left = deleteBST(root->left, val);
        return root;
    } else if(root->data < val) { 
        root->right = deleteBST(root->right, val);
        return root;
    } else {
        if(root->left == NULL && root->right == NULL) 
            return 0;
        if(root->right == NULL) {
            node* temp = root->left;
            delete root; 
            return temp;
        }
        if(root->left == NULL) {
            node* temp = root->right;
            delete root; 
            return temp;    
        }
        node* child = root->left;
        node* parent = root;

        while(child->left) {
            parent = child;
            child = child->right;
        }

        if(root != parent) {
            parent->right = child->left;
            child->left = root->left;
            child->right = root->right;
            delete root;
            return child;
        }else {
            child->right = root->right;
            delete root;
            return child;
        }
    }
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

    deleteBST(root, 3);
    inorder(root);
    cout << endl;

    return 0;
}