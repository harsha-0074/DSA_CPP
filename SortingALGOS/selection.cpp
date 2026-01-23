#include<iostream>
using namespace std;

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
}

void selection(int arr[] , int n){
    for(int i=0;i<n;i++){
        int minIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
                swap(arr[i],arr[minIdx]);
            }
        }
    }
    print(arr,n);
}

int main(){
    int arr[] = {5,4,3,2,1};
    selection(arr,5);
    return 0;
}