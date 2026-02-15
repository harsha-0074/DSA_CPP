#include<iostream>
using namespace std;

int binSearch(int arr[] , int n, int key){
    int st =0,end=n-1;
    
    while(st<=n){
        int mid = st+(end-st)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if( arr[mid] > key ){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof(int);
    
    cout<<binSearch(arr,n,8);

    return 0;
}
