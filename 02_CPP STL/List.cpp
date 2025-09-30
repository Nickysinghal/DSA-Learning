#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> ls;
    ls.push_back(3);
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(4);

    ls.push_front(5);

    ls.pop_back();  // remove last element
    ls.pop_front(); // remove first element

    ls.remove(10); // remove all occurrences of 10

    // remove using iterator
    auto it = ls.begin();
    ls.erase(it); // remove element at iterator

    for (int x : ls)
        cout << x;
}