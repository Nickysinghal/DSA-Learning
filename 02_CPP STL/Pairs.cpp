#include <iostream>
using namespace std;

int main(){
    pair<int,int> p = {1,2};

    cout<< p.first <<" "<<p.second<<" ";

    pair<int,pair<int,int>> p2 ={1,{3,4}};

    cout<< p2.first << " " << p2.second.second << " "<< p2.second.first<<" ";

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<< arr[1].second;


    pair<int, string> p3;  
    p3 = make_pair(1, "Hello"); 
    cout<<p3.second;
    
}