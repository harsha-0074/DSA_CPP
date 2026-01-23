//previous greater element

#include <iostream>
#include<stack>
#include <vector>
#include<unordered_map>
using namespace std;

vector<int> PrevGreat(vector<int> nums1){
    // unordered_map<int,int> m;
    vector<int> ans(nums1.size(),0);
    stack<int> s;

    for(int i=0;i<nums1.size();i++){
        while(s.size()>0 && s.top() <= nums1[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] =-1;
        }
        else{
            ans[i] = s.top();
        }
      s.push(nums1[i]);
    }
    return ans;
}

int main(){
  vector<int> nums1= {10, 4, 2, 20, 40, 12};
  vector<int> ans = PrevGreat(nums1);
  for( int val : ans){
    cout<< val<< " ";
  }
  return 0;
}