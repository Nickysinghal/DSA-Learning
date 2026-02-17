#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
    }
};

int main(){
    vector<int> nums ={1,1,2,1,1};
    int k=3;
    vector<int> nums1 ={4,8,2};
    int k1=1;
    vector<int> nums2 ={2,2,2,1,2,2,1,2,2,2};
    int k2=2;
    Solution s;
    cout<<s.numberOfSubarrays(nums2,k2);
}