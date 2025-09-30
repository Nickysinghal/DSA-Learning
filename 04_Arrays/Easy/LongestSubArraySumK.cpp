//Longest subarray with given sum K(positives)

//brute force solution TC: O(n^2) SC: O(n) space we are using is for giving answer not for our solution, we can also give maxLen as answer
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr={2,3,4,-1,1,1,9};
    int sum=10;
    int n=arr.size();
    
    int s=0;
    vector<int> subArr;
    int len=-1;
    int maxLen=-1;

    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==sum){
                if((j-i+1)>maxLen){
                    subArr.assign(arr.begin()+i,arr.begin()+j+1);
                    maxLen=j-i+1;
                }
                break;
            }
        }

        s=0;
    }
    for (int x : subArr) cout << x << " ";
    return 0;
}