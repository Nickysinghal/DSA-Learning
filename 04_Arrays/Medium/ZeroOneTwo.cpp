#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector <int> nums = {2,0,2,1,1,0};

    int low = 0;
        int m = 0;
        int high = nums.size()-1;

        while(m<=high){
            if(nums[m]==1) m++;

            else if(nums[m]==0){
                 swap(nums[low],nums[m]);
                 m++;
                 low++;
            }
            else{
               
                swap(nums[m],nums[high]);
                high--;
            }
            for(int x: nums)
            cout<<x<<" "; 

            cout<<"\n";


        }
        cout<<"Actual Result \n";
        for(int x: nums)
        cout<<x<<" "; 
}