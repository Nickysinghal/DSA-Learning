#include<vector>
#include<iostream>
using namespace std;


int main(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector <pair<int,int>> vec ={{1,1},{3,2}};
    vec.emplace_back(5,5);



    for(auto &x:vec){
        cout<<x.second<<" ";
    }


    auto it = v.begin();   // 'it' points to the first element (10)
    cout<<"via iterator"<< *(it);

    cout<<"loop and iterator"<<endl;
    for(vector<int>::iterator i = v.begin();i!=v.end();i++){
        cout<< *(i) << " ";
    }
}