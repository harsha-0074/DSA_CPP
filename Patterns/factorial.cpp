#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    if(n==0 || n==1){
        return 1;
    }
    else{
      for(int i=1;i<=n;i++){
        ans *= i;
      }
    }
    return ans;
}

int main(){
    cout<<fact(0)<< endl;

    return 0;
}