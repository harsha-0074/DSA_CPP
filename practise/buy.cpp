#include<iostream>
#include<vector>
using namespace std;

int profit(vector<int>& prices,int n ,int k){
     int maxProfit =0;
     for(int i=0;i<n;i++){
        maxProfit = prices[i] - k;
     }
     cout<< maxProfit << endl;
}

int maxProfit(vector<int>& prices,int n) {
        int stock =prices[0];
        for(int i=0;i<n;i++){
            if(stock > prices[i]){
                stock = prices[i];
            }
        }
        profit(prices,2,stock);
    }

int main(){
    vector<int> prices={3, 10};
    maxProfit(prices,2);

    return 0;

}