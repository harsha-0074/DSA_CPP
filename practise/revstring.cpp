#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include <algorithm>
using namespace std;

string rev(string &str){
    string ans;
    for(char i : str){
        // cout<<i;
        ans.push_back(i);
        if(i ==' '){
        break;
        
    }
}
reverse(ans.begin(),ans.end());
ans[0] = toupper(ans[0]);
ans[ans.size()]= tolower(ans.size());
cout << ans << endl;
}


int main(){
    string str ="Hello"; 
    rev(str);
    return 0;
}