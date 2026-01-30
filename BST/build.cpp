// Binary Search TRee Building and insertion

#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left=right=NULL;
    }
};

Node* insert(Node* root, int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }

    if(root->data > val){
       root->left =  insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }
    return root;
}

Node* build(int arr[],int n){

    Node* root = NULL;
    for(int i=0;i<n;i++){
        root = insert(root,arr[i]);
    }
    return root;
}


void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}

// Delete a node in BST

Node* getIS(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root; // IS
}

Node* delNode(Node* root ,int val){
    if(root == NULL){
        return NULL;
    }
    if(val < root->data){
        root->left = delNode(root->left,val);
    }
    else if(val < root->data){
        root->left = delNode(root->left,val);
    }

    else if(val > root->data){
        root->right = delNode(root->right,val);
    }
    else{
        // case 0 : no child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // case 2 : with One child
        if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right : root->left;
        }

        // case 3 : with 2 children
        Node* IS = getIS(root->right);
        root->data = IS->data;
        root->right = delNode(root->right,IS->data);
        return root;
    }
}

int main(){
    int arr[6]= {5,1,3,4,2,7};
    Node* root = build(arr, 6); 

    inorder(root);
    cout <<endl;
    delNode(root,4);

    inorder(root);
    cout <<endl;
    return 0;

}