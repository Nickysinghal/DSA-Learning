#include <iostream>
#include <climits>

int main() {
    //int a[6]={2,4,1,8,9,4};
    int a[6]={3,3,3,3,3,3};
    int n=6;
    
    //find largest //O(n)
    int largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    
    //find second largest O(n)
    int seclar=INT_MIN;//assuming number does not contain negative number
    //if array contains -ve number then we take INT_MIN
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>seclar && a[i]!=largest){
            seclar = a[i];
        }
    }
    
    if(seclar==INT_MIN)
    
    std:: cout<<"NO second largest";
    
    else
    std::cout<<seclar;
    
    //total time complexity is O(2n)

    
    return 0;
}

/*
//for optimal solution

#include <iostream>

int main() {
    // Write C++ code here
    int a[6]={3,3,8,3,3,3};
    int n=6;
    
    
    int largest = a[0];
    int seclar = -1;
    //O(n)
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            seclar = largest;
            largest = a[i];
            
        }
        else if(a[i]>seclar && a[i]<largest)
            seclar = a[i];
        
    }
    
    std::cout<<largest;
    std::cout<<seclar;

    return 0;
}
*/