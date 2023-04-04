#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]==0){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]>0){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"END";
    return 0;

}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++)
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
        }
    return ans;
    }

    vector<int> twoSum2(vector<int>&nums, int target){
        vector<int>ans;
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }


    vector<int> twoSum3(vector<int>&nums, int target){
        sort(nums.begin(), nums.end());
        int i=0;
        int j= nums.size()-1;
        vector<int>ans;
        
        while(i<j){
            if(nums[i]+nums[j]==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                break;
            }
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else {
                i++;
            }
        }
        return ans;
    }
}
// I am getting WA on this code. Can anyone help me out?
