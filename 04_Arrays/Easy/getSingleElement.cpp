// brute force approach - compare every element with every other element and count occurrences
//TC: O(n^2) SC: O(1)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={2,1,1,2,3,4,4};
    int n= arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            {
            count++;
            }
        }

        if(count==1){
            cout<<arr[i];
            break;
        }
        count=0;
    }
    return 0;
}

//optimal approach - using XOR
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr={2,1,1,2,3,4,4};
    int n= arr.size();
    int result=0;
    for(int i=0;i<n;i++){
        result^=arr[i];
    }
    cout<<result;
    return 0;
}
    */