#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//Minimum Size Subarray Sum

int helper(vector<int> &arr , int k){
    int n = arr.size();
    int left = 0;
    int sum = 0;
    int minLen = INT_MAX;

    for(int i =0;i<n;i++){
        sum += arr[i];

        while(sum >= k){
        minLen = min(minLen , i - left +1);
        sum -= arr[left];
            left++;
    }
    }
    return minLen;
}

int main(){
    vector<int> arr= {2,3,1,2,4,3};
    cout<<helper(arr,7) << endl;

    return 0;
}