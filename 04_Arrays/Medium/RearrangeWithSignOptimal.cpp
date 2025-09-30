#include<iostream>
using namespace std;
#include<vector>

class solution{
public:
    vector<int> rearrange(vector<int> nums){
        vector<int> ans(nums.size());
        int p=0;
        int n=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans[p]=nums[i];
                p+=2;
            }
            else{
                ans[n]=nums[i];
                n+=2;
            }
        }
        return ans;
    }
};

int main(){
    solution s;
    vector<int> nums={1,2,-3,-1,-2,3};
    vector<int> a = s.rearrange(nums);
    for(int x:a){
        cout<<x<<" ";
    }
}