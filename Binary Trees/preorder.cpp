#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
using namespace std;

class Node{
public :
     int data;
     Node* left;
     Node* right;

     Node(int data){
     this->data = data;
     left = right = NULL;
     }
};

static int idx =-1;

Node* binary(vector<int> nodes){
    idx++;

    if(nodes[idx] ==-1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = binary(nodes);
    currNode->right = binary(nodes);

    return currNode;
}

void preOrder(Node* root){
    
    if(root == NULL){
        return;
    }
    cout<< root->data;
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    
    if(root == NULL){
        return;
    }

    inOrder(root->left);

    
    cout<< root->data;
    
    inOrder(root->right);
}

void postOrder(Node* root){
    
    if(root == NULL){
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<< root->data;
    
    
}

// Level Order Traversal

void levelOrder(Node* root){

    if(root == NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }

        else{
         cout<< curr->data<< " ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}

}

// Height of a BINARY TREE

int height(Node* root){

    if(root == NULL){
        return 0;
    }

    int leftHT = height(root->left);
    int rightHT = height(root->right);

    int currHT = max(leftHT,rightHT) + 1;
    return currHT;
}

// Count

int count(Node* root){
    if(root == NULL){
        return 0;
    }
    
    int leftHT = count(root->left);
    int rightHT = count(root->right);
    
    return leftHT+rightHT + 1;
}

// Sum of BT

int sumBT(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHT = sumBT(root->left);
    int rightHT = sumBT(root->right);

    return leftHT + rightHT + root->data;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};


    Node* root = binary(nodes);
    // preOrder(root);
    // postOrder(root);
    // inOrder(root);
    // cout<< root->data;
    // levelOrder(root);
    // cout<< height(root)<< endl;

    // cout<< count(root);

    cout<< sumBT(root);
    return 0;
}