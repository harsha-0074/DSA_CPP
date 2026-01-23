#include <iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string s = "daabcbaabcbc";
    stack<char> st;
    
    for(char ch : s){
        st.push(ch);
        if(st.top() == 'c' && st.top() == 'b'&& st.top() == 'a'){
            st.pop();
        }
    }
    
    while(!st.empty()){
        cout<< st.top();
        st.pop();
    }
    return 0;
}