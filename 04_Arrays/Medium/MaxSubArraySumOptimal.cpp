#include<iostream>
using namespace std;
#include<vector>

class solution{
public:
    vector<int> maxSubArraySum(vector<int> nums){
        int max=0;
        int right,left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];


            if(sum>max){
                max=sum;
                right=i;
            }

            
            if(sum<0){
                sum=0;
                left=i+1;
                //cout<<"left"<<left;
            }
            
        }

        return {left,right};
    }
};

int main(){
    solution s;
    vector<int> ans = s.maxSubArraySum({-2,1,-3,4,-1,2,1,-5,4});
    for(auto x:ans) cout<<x<<endl;
    
}