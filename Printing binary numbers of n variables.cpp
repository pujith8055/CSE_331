#include<bits/stdc++.h>
using namespace std;
void binary(int n, string s)
{
    if(s.length()==n)
    {
        cout<<s<<endl;
        return;
    }
    binary(n,s+"0");
    binary(n,s+"1");
}
int main()
{
    int n;
    cin>>n;
    binary(n,"");
}
