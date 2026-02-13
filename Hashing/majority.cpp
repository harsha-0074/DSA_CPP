#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;

int majority(vector<int> &arr){
    unordered_map<int,int> m;
    int freq = 0;
    for(int i=0;i<arr.size();i++){
        if(m.count(arr[i])){
            m[arr[i]] = freq++; 
        }
        else{
            m[arr[i]] = freq+1;
        }
    }
    for(pair<int,int> val : m){
        if(val.second > arr.size()/3){
            cout<< val.first << endl;
        }
        else{
        }
    }
    cout<< endl;
}

int main(){
    vector<int> arr = {1,3,2,5,1,3,1,5,1,5,5,5};
    vector<int> arr2 = {1,2};
    majority(arr2);

    return 0;
}