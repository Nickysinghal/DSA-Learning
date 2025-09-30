#include <iostream>
#include <algorithm>
using namespace std;
void pattern1(int n)
{ /*
   *
   ***
   *****
   *******
   */
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        // star
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";

        // space
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        cout << endl;
    }
}
void pattern2(int n)
{ /*
  *********
  *******
  *****
  ***
  *
  */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
            cout << "*";
        for (int j = 0; j < i; j++)
            cout << " ";
        cout << endl;
    }
}
void pattern3(int n)
{ /*
  *
  **
  ***
  ****
  *****
  ****
  ***
  **
  *

  */
    for (int i = 0; i < 2 * n; i++)
    {
        int st;
        st = i + 1;
        if (i > n - 1)
            st = 2 * n - i - 1;
        for (int j = 0; j < st; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 0; i < 2 * n; i++)
    { /*
       *
       ***
       *****
       *******
       *****
       ***
       *
       */

        int star = n - 3 + (2 * i);
        int space = n - i - 1;

        if (i >= n)
        {
            star = (4 * n) - (2 * i) - 3;
            space = i - n + 1;
        }
        for (int j = 0; j < space; j++)
            cout << " ";
        // star
        for (int j = 0; j < star; j++)
            cout << j;
        // space
        for (int j = 0; j < space; j++)
            cout << " ";
        // space of bottom triangle
        cout << endl;
        // for(int j=0;j<i-n+1;j++) cout<<" "
        /// for(int j=0;j<4*n-2*i-3;j++) cout<<"*"
        // for(int j=0;j<i-n+1;j++) cout<<" "
    }
}
void pattern5(int n)
{
    /*
    1
    01
    101
    0101

    */

    int symbol = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            symbol = 1;
        else
            symbol = 0;

        for (int j = 0; j <= i; j++)
        {
            cout << symbol;
            symbol = 1 - symbol;
        }
        cout << endl;
    }
}
void pattern6(int n)
{ /*
  1      1
  12    21
  123  321
  12344321

  */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << j;
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << j;

        cout << endl;
    }
}
void pattern7(int n)
{
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */
    int symbol = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << symbol << " ";
            symbol++;
        }
        cout << endl;
    }
}
void pattern8(int n)
{ /*
  A
  AB
  ABC
  ABCD
  ABCDE
  */

    for (int i = 1; i <= 5; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
            cout << j;
        cout << endl;
    }
}
void pattern9(int n)
{
    /*
    ABCDE
    ABCD
    ABC
    AB
    A
    */
    for (int i = n; i > 0; i--)
    {
        for (char j = 'A'; j < 'A' + i; j++)
            cout << j;
        cout << endl;
    }
}
void pattern10(int n)
{
    /*
    A
    BB
    CCC
    DDDD
    EEEEE
    */
    char symbol = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << symbol;
        }
        cout << endl;
        symbol++;
    }
}
void pattern11(int n)
{
    /*
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA
    */
    for (int i = 1; i <= n; i++)
    {
        char symbol = 'A';
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
        {

            cout << symbol;

            if (j >= i)
                symbol--;
            else
                symbol++;
        }
        for (int j = 0; j < n - i; j++)
            cout << " ";
        cout << endl;
    }
}
void pattern12(int n)
{
    /*
    E
    DE
    CDE
    BCDE
    ABCDE
    */
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
            cout << j;
        cout << endl;
    }
}
void pattern13(int n)
{ /*
  ********
  ***  ***
  **    **
  *      *
  *      *
  **    **
  ***  ***
  ********
  */
    int sp2 = 2 * n - 2;
    int sp1 = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
        {
            for (int j = 0; j < n - i; j++)
                cout << "*";
            for (int j = 0; j < sp1; j++)
                cout << " ";

            for (int j = 0; j < n - i; j++)
                cout << "*";

            sp1 = sp1 + 2;
        }
        else
        {
            for (int j = 0; j < i - n + 1; j++)
                cout << "*";

            for (int j = 0; j < sp2; j++)
            {
                cout << " ";
            }

            for (int j = 0; j < i - n + 1; j++)
                cout << "*";

            sp2 = sp2 - 2;
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    /*
    *      *
    **    **
    ***  ***
    ********
    ***  ***
    **    **
    *      *

    */
    int sp1 = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << "*";
        for (int j = 0; j < sp1; j++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << "*";
        sp1 -= 2;
        cout << endl;
    }
    int sp2 = 2;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << "*";
        for (int j = 0; j < sp2; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
        sp2 += 2;
        cout << endl;
    }
}
void pattern15(int n){
    /*
    *****
    *   *
    *   *
    *   *
    *****
    */
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1) 
            {cout<<"*";}

            else cout<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    /*
    4 4 4 4 4 4 4 
    4 3 3 3 3 3 4 
    4 3 2 2 2 3 4 
    4 3 2 1 2 3 4 
    4 3 2 2 2 3 4 
    4 3 3 3 3 3 4 
    4 4 4 4 4 4 4 
    
    */
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {   
            int top=i;
            int bottom=j;
            int right = 2*n-1-1-j;
            int left = 2*n-1-1-i;
            //minimun of 4 numbers is min(min(a,b),min(c,d))
            cout<<n-min(min(left,right),min((top),(bottom)))<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern16(n);
    return 0;
}