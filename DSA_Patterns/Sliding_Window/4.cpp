#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>
#include<string>
using namespace std;

// Longest substr with atmost  k -Distinct elements

int helper(string &str, int k){
unordered_map<char,int> map;
int ans = INT_MIN;
int left = 0;

for(int right = 0; right < str.size(); right++){

    map[str[right]]++;

    while(map.size() > k){
        map[str[left]]--;

        if(map[str[left]] == 0)
            map.erase(str[left]);

        left++;
    }

    ans = max(ans , right - left + 1);
}
return ans;
}

int main(){
    string str = "aabacbebebe";
    cout<<helper(str , 3);
    return 0;
}