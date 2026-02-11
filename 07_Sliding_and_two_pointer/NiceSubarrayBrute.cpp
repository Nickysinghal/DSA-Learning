#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            int c=k;
            int j=i;
            while(j<nums.size() && c>=0){
           
                if(nums[j]%2!=0){
                    c--;
                }
                j++;
                if(c==0) ans++;  
            }
                      
        }
        return ans;
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