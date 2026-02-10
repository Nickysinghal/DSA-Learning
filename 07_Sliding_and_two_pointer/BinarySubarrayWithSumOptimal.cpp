#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int sumLessAndEqual(vector<int>& nums,int goal){
        int count=0;
        long sum=0;
        int l=0;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>goal && l<nums.size()&& l<=r){
                sum-=nums[l];
                l++;
                
            }
            count+=r-l+1;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        return (sumLessAndEqual(nums,goal))-(sumLessAndEqual(nums,goal-1));
    }
};

int main(){
    Solution s;
    vector<int> bArray ={1,0,1,0,1};
    int goal =2;
    cout << s.numSubarraysWithSum(bArray,goal);
}