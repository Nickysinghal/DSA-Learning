#include<iostream>
#include<vector>
using namespace std;

class LowerBoundLoop{
public:
    int lowerBound(vector<int> nums, int x){
        int ans = nums.size();
        int low=0;
        int high = nums.size()-1;
        int mid;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]>=x){
                ans=mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }

};

int main(){
    vector<int> nums = {2,3,4,6,7,8,9,9,10};
    int x = 111;
    LowerBoundLoop obj;
    cout << obj.lowerBound(nums,x);
}