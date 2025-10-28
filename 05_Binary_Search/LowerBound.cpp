#include<iostream>
#include<vector>
using namespace std;

class LowerBound {
public:

    int binary(vector<int>& nums,int low,int high,int target,int ans){
        if(low>high) return ans;
        int mid = (low+high)/2;


        if(nums[mid]>=target){
            ans = mid;
            return binary(nums,low,mid-1,target,ans);
        }
        
        return binary(nums,mid+1,high,target,ans);
    }
    int lowerBound(vector<int>& nums, int x) {
        return binary(nums,0,nums.size()-1,x,nums.size());
    }

};

int main(){
    vector<int> nums = {2,3,6,6,6,8,8,8,9,9,10,14};
    int target = 7;
    LowerBound obj;
    cout << obj.lowerBound(nums,target);

}