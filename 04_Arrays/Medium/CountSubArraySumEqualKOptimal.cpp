#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

class Solution{
public:
    int CountSubArraySumEqualK(vector<int> arr,int k){
        unordered_map<int,int> mpp;
        int presum=0;
        int tCount = 0;
        mpp[0]=1;

        for(int i=0;i<arr.size();i++){
            presum= presum+arr[i];
            int find = presum-k;
            tCount = tCount+mpp[find];
            mpp[presum]+=1;

        }

        return tCount;

    }
};

int main(){
    Solution s;
    // vector<int> a=;
    cout<< s.CountSubArraySumEqualK({1,2,3,-3,1,1,1,4,2,-3},3);
}