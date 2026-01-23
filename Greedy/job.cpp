// JOb sequencing problem

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool compare(pair<int,int>p1, pair<int,int>p2){
    return p1.second > p2.second;
}

int maxProfit(vector<pair<int,int>> arr){
   sort(arr.begin(),arr.end(),compare);

   int profit = arr[0].second;
   int safeVal = 2;

   for(int i=1;i<arr.size();i++){
    if(arr[i].first >= safeVal ){
        profit += arr[i].second;
        safeVal++;
    }
   }
   cout<< profit;
}

int main(){
    int n=4;
    vector<pair<int,int>> arr(n,make_pair(0,0));
    arr[0] = make_pair(4,20);
    arr[1] = make_pair(1,10);
    arr[2] = make_pair(1,40);
    arr[3] = make_pair(1,30);

    maxProfit(arr);

    return 0;
}