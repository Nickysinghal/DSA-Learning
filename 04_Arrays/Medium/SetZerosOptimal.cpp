#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class solution{
public: 
    void setZeros(vector<vector<int>> &nums){
        int r= nums.size();
        int c = nums[0].size();
        int col0=1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(nums[i][j]==0){
                    nums[i][0]=0;
                    if(j!=0){
                        nums[0][j]=0;
                    }
                    else{
                        col0=0;
                    }
                }
            }
        }

        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(nums[i][j]!=0){
                    if(nums[i][0]==0 || nums[0][j]==0){
                        nums[i][j]=0;
                    }
                }
            }
        }

        if(nums[0][0]==0){
            for(int j=0;j<c;j++){
                nums[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<r;i++){
                nums[i][0]=0;
            }
        }

        
    }
};

int main(){
    solution s;
   // vector <vector<int>> nums ={{1,2,3},{1,0,2}};
    vector <vector<int>> nums ={{2,2,2,0},{1,2,2,2},{2,0,2,2},{1,2,0,1},{1,1,0,2}}; 
    for(auto x:nums){
        for(auto y:x) cout<<y<<" ";
        cout<<endl;
    }
    cout<<endl;
    s.setZeros(nums);

    for(auto x:nums){
        for(auto y:x) cout<<y<<" ";
        cout<<endl;
    }
    cout<<endl;

    
}
