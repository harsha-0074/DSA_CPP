#include<iostream>
using namespace std;

int main(){
    int n=6;

    //inverted star
    
    // for(int i=1;i<=n;i++){
    //     int val =i;
    //     for(int j=1;j<=n-i+1;j++){
    //         cout << "*"<< " ";
    //     }
    //     cout<< endl;
    // }

    // half pyramid..
    
    // for(int i=1;i<=n;i++){
    //     int val =i;
    //     for(int j=1;j<=i;j++){
    //         cout <<j<< " ";
    //     }
    //     cout<< endl;
    // }

    // char ch = 'A';
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout <<ch<< " ";
    //         ch++;
    //     }
    //     cout<< endl;
    // }

    // Hollow Rectangle..
    // for(int i=1;i<=n;i++){
    //     cout<< "*";
    //     for(int j=1;j<=n-1;j++){
    //        if(i == 1 || i == n){
    //         cout<< "*";
    //        }
    //        else{
    //         cout<< " ";
    //        }
    //     }
    //     cout<< "*" << endl;
    // }

    // for(int i=1;i<=n;i++){
    //     //spaces
    //     for(int j=1;j<=n-i;j++){
    //         cout<< " ";
    //     }
    //     //stars
    //     for(int j=1;j<=i;j++){
    //         cout<< "*";
    //     }
    //     cout<< endl;
    // }

    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<< " ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<< "*";
        }
        cout<< endl;
    }

    for(int i=n;i>=1;i--){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<< " ";
        }
        //stars
        for(int j=1;j<=2*i-1;j++){
            cout<< "*";
        }
        cout<< endl;
    }



    return 0;
}
