#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int> temp;

    while(left<=mid && right<=high)
    {
        if(a[right]<a[left])
        {
        temp.push_back(a[right]); 
        right++;
        }

        else
        {
        temp.push_back(a[left]); left++;
        }

    }

    while(right<=high)
    {
    temp.push_back(a[right]);
    right++;
    }

    while(left<=mid)
    {
    temp.push_back(a[left]);
    left++;
    }

    for (int i = 0; i < temp.size(); i++) {
        a[low + i] = temp[i];
    }
    
}
void merge_sort(int low,int high,int a[])
{
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(low,mid,a);
    merge_sort(mid+1,high,a);
    merge(a,low,mid,high);

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
    // n=5;
    // int a[5]={2,1,3,6,3};
    merge_sort(0,n-1,a);
    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;

}