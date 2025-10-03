#include<iostream>
#include<vector>
using namespace std;

class solution{
public:
    void rotateImage(vector<vector<int>> &nums){
        int r=nums.size();

        for(int i=0; i<r; i++){
            for(int j=i+1;j<r;j++){
                int temp=nums[i][j];
                nums[i][j]=nums[j][i];
                nums[j][i]=temp;
                // temp =a;
                // a=b;
                // b=temp;
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<r/2;j++){
                int temp = nums[i][j];
                nums[i][j]= nums[i][r-1-j];
                nums[i][r-1-j]=temp;
            }
        }
    }
};

int main(){
    solution s;
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    for(auto x:nums){
        for(int y:x) cout<<y<<" ";
        cout<<endl;
    }

    s.rotateImage(nums);

    for(auto x:nums){
        for(int y:x) cout<<y<<" ";
        cout<<endl;
    }    


}