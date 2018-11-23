#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1,d=1,a;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    if(n>=2)
    {
    for(int j=0;j<n-1;j++)
    {
        if(vec[j]<=vec[j+1])
        {
            c++;
            if(c>=d)
            {
                d=c;
            }
        }
        else c=1;
    }
    cout<<d;
    }
    else
        cout<<c;
return 0;
}

