#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class solution{
public: 
    void setZeros(vector<vector<int>> &nums){
        int r= nums.size();
        int c = nums[0].size();

        unordered_set<int> row,col;
        

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(nums[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                    

                }
            }

        }

        // for(auto x:row) cout<<x<<" ";
        // cout<<endl;
        // for(auto y:col) cout<<y<<" ";
        // cout<<endl;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row.find(i)!=row.end() || col.find(j)!=col.end()){
                    nums[i][j]=0;
                }
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
