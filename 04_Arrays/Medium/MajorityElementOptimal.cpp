#include<iostream>
using namespace std;
#include<vector>

class solution{
public:
    int majority(vector<int> nums){
        int count=0;
        int element;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count++;
                element= nums[i];
            }
            else{
                if(element==nums[i]) count++;
                else count--;
            }
        }

        return element;
    }
};

int main(){
    solution s;
    cout<< s.majority({2,3,2,1,2,2,3,5,2,2})<<endl;
    cout<< s.majority({2,2,2,2,2,3,3,3,3,3});
}