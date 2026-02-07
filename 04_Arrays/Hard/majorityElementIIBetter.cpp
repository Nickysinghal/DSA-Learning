#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }
            else{
                mp[nums[i]]=1;
            }
        }
        int n=nums.size();
        for(auto &p:mp){
            if(p.second>n/3){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};

int main(){
    vector<int> arr={1,2,1,1,3,2,1};
    Solution s;
    vector<int> ans = s.majorityElement(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
}