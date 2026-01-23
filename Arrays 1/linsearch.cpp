#include<iostream>
using namespace std;

int linsearch(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<arr[i]<< endl;
        }
    }
    return -1;
}

int main(){
    int arr[] = {3,5,6,8,9,10,21};
    int n= sizeof(arr)/sizeof(int);
    int key = 21;
    linsearch(arr,n,key);

    return 0;
}