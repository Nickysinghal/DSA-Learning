#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr={1,1,0,1,1,1,1,0,1};
    int n=arr.size();
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=0;
        }
    }
    
    
    cout<<max;
    
    

    return 0;
}