#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>st;
    st.push("tonmoy");
    st.push("rakib");
    st.push("dipta");
    st.push("jibon");
    st.push("ishan");
   for(int i=0;!st.empty();i++)
    {
        cout<<st.top()<<" ";
        st.pop();
        cout<<i<<endl;
    }
}