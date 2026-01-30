// complete the palindrome

#include<iostream>
#include<vector>
#include<string>
using namespace std;

string letter(string &str, int n){
    string res = "";
    int st = 0;
    int end = str.size()-1;
    while(st<=end){
        if(str[st] != str[end]){
            res += str[st];
            st++;
        }
        else{
            st++;
            end--;
        }
    }
    cout<< res<< endl;
}

int main(){
    string str= "abcmadam";
    int n = str.size();
    letter(str,n);
    return 0;
}