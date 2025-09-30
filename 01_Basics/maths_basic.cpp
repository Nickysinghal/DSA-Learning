#include <bits/stdc++.h>
using namespace std;
int count_digit(int n)
{
    //   int count=0;
    //     while(n!=0)
    //     {
    //         count++;
    //         n=n/10;

    //     }
    //     return count;

    if (n == 0)
        return 1;
    return (int)(log10(n) + 1);
    // to handle negative number log10(abs(n))
}
int reverse_num(int n)
{
    int rem, rev;
    while (n != 0)
    {
        rem = n % 10;

        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
bool palindrome(int n){
    int rem, rev;
    int orig=n;
    while (n != 0)
    {
        rem = n % 10;

        rev = rev * 10 + rem;
        n /= 10;
    }
    if(rev==orig) return true;
    return false;
}
int gcd(int n1,int n2)
{
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0) gcd=i;

    }
    return gcd;
}
int main()
{
    int n;
    cout << "enter number" << endl;
   cin >> n;
    // cout<< count_digit(n);
    cout << reverse_num(n);
    //cout << palindrome(n);
   // cout << gcd(10,14);
    return 0;
}
