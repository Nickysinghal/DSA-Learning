#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int nCount=1;
            int num=nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==num) nCount++;
            }
            if(nCount>n/3) ans.insert(num);
        }
        vector<int> v(ans.begin(), ans.end());
        return v;

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