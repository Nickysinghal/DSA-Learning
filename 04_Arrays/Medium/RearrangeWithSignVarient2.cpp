#include<iostream>
using namespace std;
#include<vector>
#include <utility>

class solution{
public:
    void rearrange(vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            if(i%2==0){ //even place
                if(nums[i]<0){ //if negative is found 
                    int k=i;
                    while(nums[k]<0 && k<nums.size()-1) k++;

                    swap(nums[k],nums[i]);
                }
            }
            else{ //odd place
                if(nums[i]>0){ //if positive is found
                    int j=i;
                    while(nums[j]>0 && j<nums.size()-1) j++;
                    swap(nums[j],nums[i]);
                }
            }
        }
    }
};

int main(){
    solution s;
    vector<int> nums={-1,2,4,-5,3,-3};
    s.rearrange(nums);
    for(int x:nums) cout<<x<<" ";
    cout<<endl;
    vector<int> num2 ={1,2,-3,-1,-2,-3};
    s.rearrange(num2);
    for(int x:num2) cout<<x<<" ";
    
}