//brutal  force approach
//we search elements one by one in the array
//time complexity O(N^2) 
/*
Algorithm:
1. Start from i=0 to N-1
2. For each i, we search if i is present in the array
3. If not found, i is the missing number
*/
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a={9,6,4,2,3,5,7,0,1};
    int N=a.size()+1;
    int found=-1;
    
    for(int i=0;i<N;i++){
       //search i
       //i=1;
       for(int j=1;j<N;j++){
           if(a[j]==i){
               found++;
               break;
           }
       }
    
       if(found==-1){
           cout<<i;
           break;
           
       }
       found=-1;
    }

    return 0;
}
*/

//Better approach by hashing
/*Algorithm:
1. Create a hash table (vector) of size n+1 initialized to 0
2. Mark the presence of each element in the hash table
3. Iterate through the hash table to find the first missing number
*/
/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr={9,6,4,2,3,5,7,0,1};
    int n=arr.size();
    vector <int> h(n+1,0);
    
    for(int x:arr){
        h[x]=1;
    }
    
    for(int i=0;i<n;i++){
        if(h[i]==0)
        {
            cout<<i;
            break;
        }
    }
    

    return 0;
}
*/

//optimal
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> arr={9,6,4,2,3,5,7,0,1};
    int n=arr.size();
    int sumAll;
    sumAll= n*(n+1)/2;
    
    int s=0;
    for(int i=0;i<n;i++){
        s=s+arr[i];
    }
    
    cout<<sumAll-s;
    
    

    return 0;
}

