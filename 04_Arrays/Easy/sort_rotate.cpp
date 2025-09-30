#include <iostream>

int main() {
    int a[5] ={3,4,5,1,2};
    int temp[sizeof(a) / sizeof(a[0])];
    int n =5;
    int ans=0;
    
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            temp[(i+k)%5]=a[i]; //(i+1)%5 rotate by one place only
        }
        
        for(int i=1;i<n;i++){
            if(temp[i]>=temp[i-1])
            {
                ans=1;
                
            }
            else{
                ans=0;
                break;
            }
        }
        if(ans==1) break;
    }
    
    std::cout<<ans;

    return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;
bool sortRotate(vector<int> &a){
    //int temp[sizeof(a) / sizeof(a[0])];
    //int n =sizeof(a) / sizeof(a[0]);
    int temp[100];
    int n=a.size();
    
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            temp[(i+k)%n]=a[i]; //(i+1)%5 rotate by one place only
        }
        
        bool sorted=true;
        for(int i=1;i<n;i++){
            if(temp[i]<temp[i-1])
            {
                sorted = false;
                break;
            }
        }
        if(sorted) return true;
    }
    return false;
}
int main() {
    vector<int> a ={3,9,5,1,2};
    cout<<(sortRotate(a)?"TRUE":"FALSE");
    
    return 0;
}
*/