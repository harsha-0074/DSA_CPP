// Top view of a Binary tree

#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>
using namespace std;

class Node{
public :
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left  = right = NULL;
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

vector<int> topView(Node* root){
    vector<int> ans;
    if(root == NULL){
        return ans;
    }

    map<int,int> mp;

    queue<pair<Node*,int>> q;
    q.push({root,0});

    while(!q.empty()){
        auto temp = q.front();
        q.pop();

        Node* curr = temp.first;
        int dist = temp.second;
        
        

    }

    
}

int main(){
  int arr[6] = {5,1,3,4,2,7};
  Node* root = build(arr,6);

  return 0;
}