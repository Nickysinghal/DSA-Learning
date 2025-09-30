// //Brutal Approach (by using sets) as sets store unique elements
// #include <iostream>
// #include<set>
// using namespace std;
// int main() {
//     set <int> st;

    
//     int arr1[6]={1,2,2,3,4,8};
//     int arr2[7]={2,3,4,4,5,6,7};
    
//     for(int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++)
//         st.insert(arr1[i]);
    
//     for(int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){
//         st.insert(arr2[i]);
//     }
    

//         int i=0;
//     int unio[st.size()];
//     for(int x:st){
//         unio[i++]=x;
//     }
    
//     for(int i=0;i<sizeof(unio)/sizeof(unio[0]);i++)
//     cout<<unio[i]<<" ";

//     return 0;
// }

//Optimal approach (by using two pointers) 
#include <iostream>
#include <vector>
//using namespace std;

int main() {
    std::vector<int> a1={1,2,2,3,4,5};
    std::vector<int> a2={2,2,3,3,4,5,5,6};
    std::vector<int> uni;
    
    int n1=a1.size();
    int n2=a2.size();
    
    int i=0;
    int j=0;
    
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            if(uni.empty()||a1[i]!=uni.back()){
                uni.push_back(a1[i]);
            }
            i++;
        }
        
        else if(a2[j]<a1[i]){
            if(uni.empty()||a2[j]!=uni.back()){
                uni.push_back(a2[j]);
                
            }
            j++;
        }
        else{
            if(uni.empty()||a2[j]!=uni.back()){
                uni.push_back(a2[j]);

            }
            j++;
            i++;

        }
    }
    
    while(i<n1){
        if(uni.empty()||a1[i]!=uni.back()){
            uni.push_back(a1[i]);
            
        }
        i++;
    }
    
    while(j<n2){
        if(uni.empty()||a2[j]!=uni.back()){
            uni.push_back(a2[j]);
            
        }
        j++;
    }
    
    for(int i=0;i<uni.size();i++){
        std::cout<<uni[i]<<" ";
    }
    

    return 0;
}