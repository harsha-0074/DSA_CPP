#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;

//Permutaions of string
void perms(string s,string ans){
    int n = s.size();
    if( n == 0){
        cout<<ans<<endl;
        return;
    }

    for(int i =0;i<s.size();i++){
        char ch = s[i];
        string newstr = s.substr(0,i)+s.substr(i+1,n-i-1);
        perms(newstr,ans+ch);
    }
}

int main(){
    string s = "abc";
    string ans = " ";
    int n = 3;
    perms(s,ans);
    return 0;
}