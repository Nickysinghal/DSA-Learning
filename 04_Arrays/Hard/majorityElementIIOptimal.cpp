#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int count1=0,ele1=INT_MIN ,count2=0,ele2=INT_MIN,n= nums.size();

       for(int i=0;i<n;i++){
        if(count1==0 && ele2!=nums[i]){
            count1++;
            ele1=nums[i];
        }
        else if(count2==0 && ele1!=nums[i]){
            count2++;
            ele2=nums[i];
        }
        else if(ele1==nums[i]) count1++;
        else if(ele2==nums[i]) count2++;
        else{
            count1--;
            count2--;
        }
       }

        vector<int> ans;

        count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==ele1) count1++;
            if(nums[i]==ele2) count2++;
        }
        int minCount = n/3;
       if(count1>n/3) ans.push_back(ele1);
       if(count2>n/3) ans.push_back(ele2);
       
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