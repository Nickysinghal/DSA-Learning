#include<iostream>
#include<map>
#include<vector>
using namespace std;

class solution{
public:
    vector<int> twoSum(vector<int> arr,int target){
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
        int a= arr[i];
        int more = target - a;
        if(m.find(more)!=m.end())
            return {m[more],i};
        
        m[a]=i;    
    }
    return {-1,-1};
    }    
};

int main(){

    solution s;
    vector<int> res = s.twoSum({2,4,6,1,8,9},80);
    cout << res[0] << " " << res[1] << endl;
    return 0;
    
}

