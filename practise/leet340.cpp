#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

// sliding window + freq map(Hash map)
//leetcode 340 
//Longest Substring with At Most K Distinct Characters

int helper(string &str,int k){
   unordered_map<char,int> elements;
   int left = 0;
   int count = -1;

   for(int i = 0;i<str.size();i++){
    elements[str[i]]++;

    while(elements.size() > k){
        elements[str[left]]--;
        if(elements[str[left]] == 0){
            elements.erase(str[left]);
        }
        left++;
    }
        if(elements.size() == k) count = max(count, i - left + 1);
    }
    return count;
}


int main(){
    string str = "aabacbebebe";
    
    cout<<helper(str, 3) << endl;
    return 0;
}