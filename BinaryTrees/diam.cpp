#include<iostream>
#include<vector>
#include<algorithm>
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


int diam(Node* root){
    if(root == NULL){
        return 0;
    }
    int currDiam = height(root->left)+height(root->right) +1;
    int leftht = diam(root->left);
    int rightht = diam(root->right);
    int ans = max(currDiam,max(leftht,rightht));
}

//diam 2

pair<int,int> diam2(Node* root){
    if(root == NULL){
        return make_pair(0,0);
    }

    //(diam,ht)
    pair<int,int> leftInfo = diam2(root->left);
    pair<int,int> rightInfo = diam2(root->right);

    int currDiam = leftInfo.second+ rightInfo.second + 1;

    int finaldiam = max(currDiam,max(leftInfo.first,rightInfo.first));
    int finalht = max(leftInfo.second,rightInfo.second) + 1;

    return make_pair(finaldiam,finalht);

    
}


int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};


    Node* root = binary(nodes);
    cout<< "Daimeter = " << diam2(root).first;
    return 0;
}

