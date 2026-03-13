#include<iostream>
#include<vector>
using namespace std;

// max Subarray Sum

void kadanes(vector<int> &arr, int n){
    int currSum =0;
    int maxSum = INT32_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        } 
    }
    cout<< currSum;
}

int main(){
    vector<int> arr = {2,-3,6,-5,4,2};
    kadanes(arr,6);
    return 0;

}