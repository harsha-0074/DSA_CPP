#include<iostream>
#include<unordered_set>
#include<map>
#include<vector>
#include<set>
using namespace std;

void intersection(vector<int> arr1,vector<int> arr2){
    unordered_set<int> s;
    for(int i=0;i<arr1.size();i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<arr2.size();i++){
        if(s.find(arr2[i]) != s.end()){
            cout<< arr2[i] <<',';
        }
    }
    cout<< endl;
}

int main(){
    vector<int> arr1 = {7,3,9};
    vector<int> arr2 = {2,3,9};
    
    intersection(arr1,arr2);

    return 0;
}