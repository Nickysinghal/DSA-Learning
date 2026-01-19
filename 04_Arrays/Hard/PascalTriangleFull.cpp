#include<iostream>
#include<vector>
using namespace std;

class sol{
    public:
    int ncr(int n,int r){  //O(r)
        if(n<1||r<1) return 1;
        return ncr(n-1,r-1)*n/r;
    }

    vector<vector <int>> pascal(int n){

        vector<vector<int>> triangle;


         
        for(int row = 0;row<n;row++){ //O(n)
            vector<int> line;
            for(int col=0;col<=row;col++){  //O(n)
                line.push_back(ncr(row,col));
            }
            triangle.push_back(line);
        }

        return triangle;


    }
};

int main(){
    int n= 5;
    sol s;
    
    for(int row = 0;row<n;row++){ //O(n)
        for(int col=0;col<=row;col++){  //O(n)
            cout<<s.ncr(row,col)<<" ";
        }
        cout<<endl;
    }
    // cout<<"sinle element formula"<<endl;
    // cout<< s.ncr(5,3);

    cout<<"single row"<<endl;
    int srow=7;
    for(int col=0;col<srow;col++){  //O(n)
        cout<<s.ncr(srow-1,col)<<" ";
    }

    //full array of pascal
    cout<<"\nfull array of pascal\n";
    for(auto line:s.pascal(6)){
        for(auto x:line)
            cout<<x<<" ";
        cout<<endl;    
    }

    return 0;
}