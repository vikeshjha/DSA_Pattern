#include<bits/stdc++.h>
using namespace std;
int BuyAndSell(vector<int> arr){
    int n = arr.size();
    int mini = INT_MAX;
    int profit = 0;

    for(int i = 0; i < n; i++){
        mini = min(mini, arr[i]);
        profit = max(profit, arr[i]- mini);
    }
    return profit;

}
int main(){

    vector<int> arr{7,1,5,3,6,4};
    cout<<BuyAndSell(arr)<< endl;

}