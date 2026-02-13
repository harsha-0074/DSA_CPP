#include<iostream>
#include<vector>
#include <algorithm>
#include<string>
using namespace std;

class Node{
public :
     string str;
     int val;
     Node* next;

     Node(string str, int val){
        this->str = str;
        this->val = val;
        next = NULL;
     }
};

class HashTable{
    int totSize;
    int currSize;
    Node** table;
    
    int hashfun(string str){
        int idx = 0;

        for(int i=0;i<str.size();i++){
            idx = (idx + (str[i] * str[i])) % totSize;
        }

        return idx;
    }


public :
    HashTable(int size =6){
        totSize = size;
        currSize =0;   

        table = new Node*[totSize];

        for(int i=0;i<totSize;i++){
            table[i] = NULL;
        }
    }

    bool exists(string str){
        int idx = hashfun(str);

        Node* temp = table[idx];

        while(temp != NULL){
            if(temp ->str == str){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void insert(string str, int val){
        int idx = hashfun(str);

        Node* newNode = new Node(str,val);

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;
    }
        int search(string str){
            int idx = hashfun(str);

        Node* temp = table[idx];

        while(temp != NULL){
            if(temp ->str ==  str){
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
        }

        void print(){
            for(int i =0;i<totSize;i++){
                cout<< "idx" <<i<< "->" ;

                Node* temp = table[i];

                while(temp != NULL){
                    cout<< "(" << temp->str <<"," << temp->val<<") ->";
                    temp = temp->next;
                }
                cout <<"NULL"<< endl;
            } 
        }

        void remove(string str){
            int idx = hashfun(str);

            Node* temp = table[idx];
            Node* prev = temp;

            while(temp!=NULL){
                if(temp->str == str){
                    if(prev == temp){
                        table[idx]= temp->next;
                    }
                    else{
                        prev->next = temp->next;
                    }
                    break;
                }
            prev = temp;
            temp= temp->next;
            }
            
        }
};

int main(){
    HashTable ht ;

    ht.insert("India" , 190);
    ht.insert("china" , 10);
    ht.insert("Germany" , 90);

    // if(ht.exists("India")){
    //     cout<<"Population : " <<ht.search("India") << endl;
    // }
    ht.remove("china");
    ht.print();

    return 0;
}