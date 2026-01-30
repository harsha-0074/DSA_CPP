// Find the series

#include<iostream>
#include<vector>
using namespace std;

int findSeries(vector<int> &arr , int n){
   //airthmetic
   int ans;
   int d =  (arr[1] - arr[0]);
   bool ap =true;
   for(int i =1;i<n-1;i++){
    if((arr[i+1] - arr[i]) !=  d){
        ap = false;
        break;
   }
}
if (ap) {
        return arr[n - 1] + d;
    }

    bool gp = true;
   
   for(int i =1;i<n-1;i++){
   // Geometric progression
    if(arr[i+1] * arr[i-1] != arr[i] * arr[i] ){
      gp = false;
      break;
   }
   }
if(gp){
    int ratio = arr[1] / arr[0];   
        return arr[n - 1] * ratio;
    }

 bool isFibo = true;

    for(int i = 2; i < n; i++) {
        if (arr[i] != arr[i - 1] + arr[i - 2]) {
            isFibo = false;
            break;
        }
    }

    if (isFibo) {
        return arr[n - 1] + arr[n - 2];
    }
    return -1;
}


int main(){
    vector<int> arr={1,1,2,3,5};
    findSeries(arr,5);
    return 0;
}