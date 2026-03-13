#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Sub array Sum equlas 'K'

int helper(vector<int> &arr, int k){
    int left = 0;
    int ans = 0;
    int result = INT_MIN;

    for(int i =0;i<arr.size();i++){
        ans += arr[i];
        if(i - left +1 < k){
            continue;
        }
        if(i - left +1 == k){
            result = max(result ,ans);
            ans -= arr[left];
            left++;
        }

    }
    cout<< result;
}

int main(){
    vector<int> arr = {2,1,5,1,3,2};
    helper(arr,3);
    return 0;
}