// Reverse Polish Notation

#include <iostream>
#include<stack>
#include <vector>
using namespace std;

int Polish(vector<string> tokens){
    stack<long long> s;

    for(auto token : tokens ){
      if(token == "+" || token == "-" || token == "*" || token == "/"){
        long long b= s.top(); s.pop();
        long long a= s.top(); s.pop();
        long long res = 0;

        if(token == "+") res= a+b;
        else if(token == "-") res= a-b;
        else if(token == "*") res= a*b;
        else res = a / b;

        s.push(res);
      }
    else{
        s.push(stoll(token));
    }
    }
    return s.top();
}

int main(){
    vector<string> tokens = {"2","1","+","3","*"};
    int ans = Polish(tokens);
    cout<< ans<< " " << endl;

    return 0;
}