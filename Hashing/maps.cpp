#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    unordered_map<string,int> m;

    // insertion
    m["boat"] = 10;
    m["ship"]  = 20;

    for(pair<string,int> type : m){
        cout<< type.first <<"," << type.second << endl;
    }
    cout<< endl;

    // delete 
    m.erase("boat");
   
    // check the key present or not
    if(m.count("boat")){
        cout<< "Present "<< endl;
    }
    else{
        cout<< " Not Present "<< endl;
    }

    // similary for maps but it returns in the ascending order..//
    return 0;
}