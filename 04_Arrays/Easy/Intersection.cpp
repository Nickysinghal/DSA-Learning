//intersection of two arrays by using two pointers
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>a1={1,2,2,3,3,3,4,5,6};
    vector<int>a2={2,3,3,4,6,7,8};
    vector<int>inter;
    
    int n1=a1.size();
    int n2=a2.size();
    int i=0;
    int j=0;
    
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            i++;
        }
        else if(a2[j]<a1[i]){
            j++;
        }
        else{
            inter.push_back(a1[i]);
            i++;
            j++;
        }
    }
    
    for(int x:inter){
        cout<<x<<" ";
    }
    

    return 0;
}