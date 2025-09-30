//Right Rotate an array by one place
#include <iostream>

int main() {
    // Write C++ code here
    int a[5] ={1,2,3,4,5};  //{5,1,2,3,4}
    int temp[sizeof(a) / sizeof(a[0])];
    int n =5;
    for(int i=0;i<n;i++){
        temp[(i+1)%5]=a[i]; //(i+1)%5 rotate by one place only
        
    }
    //a=temp; not supported in cpp like java & py
    
    std::copy(temp,temp+5,a);
    
    for(int i=0;i<sizeof(a) / sizeof(a[0]);i++)
    std::cout<<a[i]<<" ";
}