// Remove duplicates from Sorted array
#include <iostream>

int main() {
    int n=6;
    int a[n]={1,2,2,3,3,4};
    int ind=1;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            a[ind]=a[i+1];
            ind++;
        }
    }
    
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n"<<ind;

    return 0;
}