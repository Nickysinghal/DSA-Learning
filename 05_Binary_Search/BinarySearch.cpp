#include<iostream>
#include<vector>
using namespace std;

class BinarySearch {
public:

    int binary(vector<int>& nums,int low,int high,int target){
        if(low>high) return -1;
        int mid = (low+high)/2;

        if(nums[mid]==target) return mid;
        else if(nums[mid]>target)
        return binary(nums,low,mid-1,target);
        return binary(nums,mid+1,high,target);
    }
    int search(vector<int>& nums, int target) {
        return binary(nums,0,nums.size()-1,target);
    }

};

int main(){
    vector<int> nums = {2,3,6,8,9,10,14};
    int target = 10;
    BinarySearch obj;
    cout << obj.search(nums,10);

}