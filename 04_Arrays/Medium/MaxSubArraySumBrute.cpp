#include<iostream>
using namespace std;
#include<vector>

class solution{
public:
    int maxSubArraySum(vector<int> nums){
        int max=0;
        for(int i=0;i<nums.size();i++){
            int sum =0;
            for(int j=i;j<nums.size();j++){
                sum=sum+nums[j];

                
                if(sum>max) max=sum;
            }

        }

        return max;
    }
};

int main(){
    solution s;
    cout<< s.maxSubArraySum({-2,1,-3,4,-1,2,1,-5,4})<<endl;
    cout<< s.maxSubArraySum({1});
}