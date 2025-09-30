#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int n, int a[])
{
    
    int didswap=0;
    for (int j = n-1; j >= 0; j--)
    {
        for (int i = 0; i <=j-1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                didswap=1;
            }
        }
        
        
        if(didswap==0) break;
    }

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
void recursive_bubble_sort(int n,int a[])
{   int didswap=0;
    if(n==1) return;

    for (int i = 0; i <n-1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                didswap=1;
                
            }
        }
        if(didswap==0) return;
     recursive_bubble_sort(n-1,a);   
}
int main()
{
    int n;
    cout<<"Enter size and values of array";
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    recursive_bubble_sort(n,a);

    for(int i=0;i<n;i++) 
    cout<<a[i]<<" ";

    return 0;
}