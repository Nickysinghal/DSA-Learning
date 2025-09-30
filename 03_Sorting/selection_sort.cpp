#include <bits/stdc++.h>
using namespace std;

// this function returns the index of minimun value
int find_min_index(int start, int n, int a[])
{
    int index = start;
    for (int i = start; i < n; i++)
        if (a[i] < a[index])
            index = i;

    return index;
}
void selection_sort(int n, int a[])
{
    int s, temp;
    for (int i = 0; i < n; i++)
    {

        s = find_min_index(i, n, a);
        // swap element at s and i
        temp = a[i];
        a[i] = a[s];
        a[s] = temp;
    }
}
int main()
{
    int n;
    // taking input
    cout << "Enter the size and values";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    // calling selection sort
    selection_sort(n, a);

    // printing output
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}