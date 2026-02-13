#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
#include<string>
using namespace std;

bool valid(string s , string t){
    unordered_map<char,int> m;
    // size checking
    if(s.size() != t.size()){
        return false;
    }
    for(int i =0 ;i<s.size();i++){
        if(m.count(s[i])){
          m[s[i]]++;
        }
        else{
            m[s[i]] = 1;
        }
    }
    // traverse on secound loop and reduce freq..
    for(int i =0 ;i<t.size();i++){
        if(m.count(t[i])){
          m[t[i]]--;
           if(m[t[i]] == 0){
            m.erase(t[i]); // erase the element if 0 , since it may go into negatives
        }
    }
    else{
        return false;
    }
}
    if(m.size() !=0) return false;

    else return true;
}

int main(){

    string s = "raced";
    string t = "care";

    cout<<valid(s,t) <<endl;;

}