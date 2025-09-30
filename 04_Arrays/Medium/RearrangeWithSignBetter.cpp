#include<iostream>
using namespace std;
#include<vector>
#include <utility>

class solution{
public:
    void rearrange(vector<int> &nums){
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()/2;i++){
            nums[i*2]=positive[i];
            nums[i*2+1]=negative[i];
        }
    }
};

int main(){
    solution s;
    vector<int> nums={-1,2,4,-5,3,-3};
    s.rearrange(nums);
    for(int x:nums) cout<<x<<" ";
}