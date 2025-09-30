// left rotate an array by one place without using extra memory time O(n), SC O(1)
/*
#include <iostream>

int main() {
    int a[6]={1,2,3,4,5,6};
    int n=6;


    int j=a[0];
    for(int i=0;i<n-1;i++){
        a[i] = a[i+1];

    }
    a[n-1]=j;

    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }

    return 0;
}
*/

// left rotate an array by k place WITHOUT using extra memory TC O(n2), extra memory O(1)
// left rotate {1,2,3,4,5,6} -> {2,3,4,5,6,1}

// #include <iostream>

// int main() {
//     int a[6]={1,2,3,4,5,6};
//     int n=6;
//     int k=8;

//     for(int j=0;j<k%n;j++)
//     {
//         int num=a[0];
//         for(int i=0;i<n;i++){
//             a[i] = a[i+1];

//         }
//         a[n-1]=num;

//     }

//     for(int i=0;i<n;i++){
//         std::cout<<a[i]<<" ";
//     }

//     return 0;
// }



// left rotate an array by k place WITH using extra memory TC O(n), extra memory O(n)
// left rotate {1,2,3,4,5,6} -> {2,3,4,5,6,1}
/*#include <iostream>

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int k = 2;
    int temp[6];

    k=k%n;
    for (int i = 0; i < k; i++)
    {
        temp[i] = a[i];
    }

    for(int i=0;i<n-k;i++)
    {
        a[i]=a[i+k];
    }
    
    for(int i=n-k;i<n;i++)
    {
        a[i]=temp[i-(n-k)];
    }


    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    return 0;
}
*/
//most optimal approach using reversal algorithm TC O(n), SC O(1)

#include <iostream>
void reverse(int arr[], int l, int r);
int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int k = 2;

    k = k % n; // in case k is greater than n

    reverse(a, 0, k - 1);     // reverse first k elements
    reverse(a, k, n - 1);     // reverse remaining n-k elements
    reverse(a, 0, n - 1);     // reverse the whole array

    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }

    return 0;
}   
void reverse(int arr[], int l, int r) {
    while (l < r) {
        std::swap(arr[l], arr[r]);
        l++;
        r--;
    }
}



