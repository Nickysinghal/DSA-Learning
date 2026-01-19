#include<iostream>
using namespace std;

class sol{
    public:
    int ncr(int n,int r){
        if(n<1||r<1) return 1;
        return ncr(n-1,r-1)*n/r;
    }
};

int main(){
    int n= 5;
    int r=3;
    int c=1;

    for(int i=1;i<=r;i++){
        c = c*n/i;
        cout<<"--"<<c;
        n--;
    }
    cout << c;

    sol s;
    
    cout<<"formula"<<endl;
    cout<< s.ncr(5,3);

    return 0;
}