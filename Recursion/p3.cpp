//permutations of abc

#include<iostream>
#include<string>
using namespace std;
  
void perms(string str,int indx,int r){
   if(indx == r){
    cout<< str<<endl;
   }
   for(int i=indx;i<=r;i++){
      swap(str[indx],str[i]);
      perms(str,indx+1,r);
      swap(str[indx],str[i]);
   }
}

int main(){
    string str= "abcd";
    perms(str,0,str.length()-1);
    return 0;
}