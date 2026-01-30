#include<iostream>
#include<vector>
#include <algorithm>
#include<queue>
#include <bits/stdc++.h>
using namespace std;

class Heap{
    vector<int> vec;
public :
    void push(int val){
       vec.push_back(val);

       int x = vec.size()-1;
       int parIx = (x-1)/2;
       while(parIx >= 0 && vec[x] > vec[parIx]){
        swap(vec[x], vec[parIx]);
        x = parIx;
        parIx = (x-1)/2;
       }
    }

    void heapify(int i){
        if( i > vec.size() ){
            return;
        }
        int l = 2 * i+1;
        int r = 2 * i+2;

        int maxIdx = i;
        if(l< vec.size()  && vec[l] > vec[maxIdx]){
           maxIdx = l;
        }
        if(r< vec.size()  && vec[r] > vec[maxIdx]){
           maxIdx = r;
        }

        swap(vec[i] , vec[maxIdx]);
        if( maxIdx != i ){// swapping with child node
            heapify(maxIdx);
        }
    }

    void pop(){
    // step : 1
       swap(vec[0], vec[vec.size()-1]);

    // step :2
       vec.pop_back();

    // step :3
     
       heapify(0);

    }
    int top(){
       return vec[0];
    }
    bool empty(){
       return vec.size() == 0;
    }
};


int main(){
   Heap hp;
   hp.push(10);
   hp.push(100);
   hp.push(120);

   cout << hp.top()<< endl;
   hp.pop();
   cout << hp.top()<< endl;

   return 0;
}