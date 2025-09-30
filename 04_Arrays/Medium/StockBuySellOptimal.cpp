#include<iostream>
using namespace std;
#include<vector>

class solution{
public: 
    int profit(vector<int> nums){
        int buy=nums[0];
        int maxprofit=0;
        for(int i=0;i<nums.size();i++){
            int profit = nums[i]-buy;
            maxprofit = max(maxprofit,profit);
            buy = min(buy,nums[i]);
        }

        return maxprofit;
    }
}; 

int main(){
    solution s;
    vector<int> nums = {7,1,5,3,6,4};
    vector<int> num2 = {7,6,4,3,1};
    cout<< s.profit(nums);
}