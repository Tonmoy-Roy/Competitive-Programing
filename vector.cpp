#include <bits/stdc++.h>
using namespace std;
bool myfunc(int a, int b)
{
    return (a > b);
}
int main()
{
    set<int> s;
    set<int>::iterator it;
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(3);
    for (it = s.begin(); it != s.end(); it++)
    {
        cout <<*it<<" ";
    }
}