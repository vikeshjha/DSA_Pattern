#include<bits/stdc++.h>
using namespace std;

vector<int> TwoSum(vector<int> arr, int target,vector<int> &ans){
    int n = arr.size();

    //BRUTE FORCE SOLUTION => it takes extra space
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] ==  target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    //BETTER => no extra space is used
    for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i] + arr[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};

    // OPTIMAL =>  TC = O(n * log n), SC = O(N);
    int  n = arr.size();

        map<int,int>mp;

        for(int i = 0; i < n; i++){
            int remaining = target - arr[i];

            if(mp.find(remaining) != mp.end()){
                return {mp[remaining], i};
            }
            mp[arr[i]] = i;
        }
        return {};
    return ans;
}

int main(){

    vector<int> arr{2,7,11,15};
    int target = 9;
    vector<int> ans; 
    TwoSum(arr,target, ans);
    for(int i: ans){
        cout<<i;
    }

    


    return 0;
}