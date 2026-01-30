// Stack Span Problem

#include <iostream>
#include<stack>
#include <vector>
using namespace std;

int main(){
   vector<int>Stock = {100,80,60,70,60,75,70};

   vector<int> ans(Stock.size(),0);
   stack<int>s;

   for(int i=0;i<Stock.size();i++){
    while(s.size() >0 && Stock[s.top()] <=Stock[i]){
        s.pop();
    }
    if(s.empty()){
         ans[i]= i+1;
    }
    else{
        ans[i] = i-s.top(); // i- prevHigh
    }
    s.push(i);
   }

   for(int val : ans){
    cout << val << " "<<endl;
   }
   cout<< endl;
   return 0;
}