#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int closest = nums[0];

        for(int i=1;i<nums.size();i++) {

            if(abs(nums[i])<abs(closest) || (abs(nums[i]) == abs(closest) && nums[i] > closest)) {
                closest = nums[i];
            }
        }

        return closest;
    }
};


int main(){
    Solution s;
    vector<int> nums ={-4,4};
    cout<<s.findClosestNumber(nums);
}