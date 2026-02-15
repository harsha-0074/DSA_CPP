#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,3,5,6};
    int n= sizeof(arr)/sizeof(int);

    // int copyArr[n];
    // for(int i=0;i<n;i++){
//        int j = n-i-1;
//        copyArr[i] = arr[j];
//     }
//     for(int i=0;i<n;i++){
//     arr[i] = copyArr[i];
// }

//     for(int i=0;i<n;i++){
//         cout<< arr[i] << "," ;
// }

int st = 0;
int end = n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
     for(int i=0;i<n;i++){
        cout<< arr[i] << "," ;
}
return 0;

}
