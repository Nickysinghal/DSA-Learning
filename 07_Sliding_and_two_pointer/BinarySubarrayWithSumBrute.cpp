#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            long sum=0;
            for(int j=i;j<n;j++){
                sum=sum+nums[j];
                if(sum==goal) count++;
            }
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