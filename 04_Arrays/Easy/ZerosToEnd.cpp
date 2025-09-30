//Brute force approach 
//firstly store all non-zero elements in a temporary array
//then in remaining place fill with zeros
//hence time complexity is O(n) and space complexity is O(n)
/*
#include <iostream>

int main() {
    int a[7]={2,3,0,0,1,0,0};
    int n=7;
    int temp[7];
    int j=0;
    //O(n)
    for(int i=0;i<n;i++){  
        if(a[i]!=0){
            temp[j]=a[i];
            j++;
        }
    }
    //O(k) if k is the number of non-zero elements
    for(int i=0;i<j;i++){
        std::cout<<temp[i]<<" ";
    }
    

    for(int i=0;i<j;i++){
        a[i]=temp[i];
    }
    //O(n-k)
    for(int i=j;i<n;i++){
        a[i]=0;
    }
    std::cout<<"\n";
    
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }

    return 0;
}

//O(n)+O(n-k)+O(k)=O(n)
*/

// Optimal solution
//time complexity is O(n) and space complexity is O(1)
#include <iostream>

int main() {
    int a[7]={0,3,0,2,1,0,0};
    int n=7;
    
    int j=-1;

    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j!=-1){
        for(int i=j;i<n;i++){
            if(a[i]!=0){
                int t= a[i];
                a[i]=a[j];
                a[j]=t;
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }

    return 0;
}