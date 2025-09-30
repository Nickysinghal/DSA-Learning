#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        int element_index=i;
        while(element_index>0 && a[element_index]<a[element_index-1])
        //swap values at element_index and element_index-1
        {
        int temp = a[element_index];
        a[element_index] =a[element_index -1];
        a[element_index -1] = temp;
        element_index--;
        }
    }
}
void recursive_insertion_sort(int n,int i,int a[])
{
    if(n==1) return;

        int element_index=i;
        while(element_index>0 && a[element_index]<a[element_index-1])
        //swap values at element_index and element_index-1
        {
        int temp = a[element_index];
        a[element_index] =a[element_index -1];
        a[element_index -1] = temp;
        element_index--;
        }

        recursive_insertion_sort(n,i+1,a);

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
    insertion_sort(n,a);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
 