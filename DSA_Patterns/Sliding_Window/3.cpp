#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>
#include<string>
using namespace std;

// Winodw + Hash Map 

int helper(string &str){
    unordered_map<char,int> elements;
    int left = 0;
    int ans = 0;

    for(int i =0;i< str.size();i++){
        elements[str[i]]++;

        while(elements[str[i]] > 1){
            elements[str[left]]--;
            left++;
        }
    ans = max(ans, i -left+1 );
    }
    return ans;
}

int main(){
    string str = "ababbb";
    cout <<helper(str);

    return 0;

}