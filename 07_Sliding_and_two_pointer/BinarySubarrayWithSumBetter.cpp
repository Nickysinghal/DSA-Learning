#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        int n=nums.size();
        
        unordered_map<int,int> mp;

        int sum=0;

        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
           
            int prefixSum = sum-goal;
            if(mp.find(prefixSum)!=mp.end()){
                count = count+mp[prefixSum];
            }
            mp[sum]++;
            
        }

        return count;
    }
};

int main(){
    Solution s;
    vector<int> bArray ={1,0,1,0,1};
    int goal =2;
    cout << s.numSubarraysWithSum(bArray,goal);
}