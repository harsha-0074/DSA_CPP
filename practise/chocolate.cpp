#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void chocolate(vector<int> &arr,int n,int m){
    sort(arr.begin(),arr.end());
    int minDiff =INT16_MAX;

    int i = 0;
    int j = m-1;

    if(m>n){
      cout<<"NO"<< endl;
      return;
    } ;
    while(j<n){
            int diff = arr[j] - arr[i];
            minDiff = min(minDiff, diff);
      i++;
      j++;
    }
    cout<< minDiff;
}


int main(){
    vector<int> arr = {3, 4, 1, 9, 56, 7, 9, 12};
    chocolate(arr,8,3);
    return 0;
}