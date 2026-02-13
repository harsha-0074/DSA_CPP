#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;

  // pair sum using worst case 0(n) avg case o(1) .. 
   void pairSum(vector<int> &arr , int target){
    unordered_map<int ,int > m;
    for(int i =0;i<arr.size();i++ ){
        int complement = 9 - arr[i];
        if(m.count(complement)){
            cout << m[complement] << "," << i << endl ;
        }
    m[arr[i]] = i;
    }
}

int main(){
    vector<int> arr = {1,2,7, 11,15,5};

    pairSum(arr, 9);
    return 0;
}