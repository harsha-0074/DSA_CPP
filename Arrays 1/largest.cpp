#include<iostream>
using namespace std;

int main(){
    int arr[] = {7,4,5,63,72};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        } 
    }
    cout<< max<< endl;
    return 0;
}