#include<iostream>
#include<vector>
using namespace std;

class solution{
public: 
    int majority(vector <int> nums){
        for(int i=0;i<nums.size();i++){
            int count=0;
            int element = nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]==element) count++;
            }
            if(count>nums.size()/2)
            return element;
        }
        return -1;
    }
};
int main(){
    solution s;
    cout<< s.majority({2,3,2,1,2,2,3,5,2,2});
}