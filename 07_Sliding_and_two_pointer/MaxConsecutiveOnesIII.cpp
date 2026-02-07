#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        int j=0;
        int zeros=0;
        int maxLen=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0){
                zeros++;
            }

            if(zeros>k){
                if(nums[j]==0){
                    zeros--;
                }
                j++;
            }
            maxLen= max(maxLen,r-j+1);

        }
        return maxLen;
    }
};

int main(){
    vector<int> arr = {1,1,1,0,0,0,1,1,1,1,0};
    int k=2;

    Solution s;
    cout<< s.longestOnes(arr,k);

}