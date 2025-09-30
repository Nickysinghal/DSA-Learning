#include<iostream>
using namespace std;
#include<vector>

class solution{
public: 
    int profit(vector<int> nums){
        int profit =0;
        for(int i=0;i<nums.size();i++){
            int buy = nums[i];
            for(int j=i+1;j<nums.size();j++){
                int sell = nums[j];
                if(sell-buy>profit){
                    profit=sell-buy;
                }
            }
        }

        return profit;
    }
};

int main(){
    solution s;
    vector<int> nums = {7,1,5,3,6,4};
    vector<int> num2 = {7,6,4,3,1};
    cout<< s.profit(num2);
}