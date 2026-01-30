#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
using namespace std;

class Student{
    string name;
    float cgpa;
public:
    
    // Setters and Getters
    void setName(string nameVal){
        name = nameVal;
    }

    void getName(){
        cout<< name << " " << endl;
    }

};

int main(){
    Student s1;
    s1.setName("Harsha");
    s1.getName();
    return 0;
}