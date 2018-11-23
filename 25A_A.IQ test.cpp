#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,i,e=0,o=0,ei,oi;
    cin>>n;
    for(i=1;i<=n;i++)
    {

        cin>>num;
        if(num%2==0)
        {
            e++;
            ei=i;
        }
        else
        {
            o++;
            oi=i;
        }
    }
    if(e==1)
        cout<<ei;
    else
        cout<<oi;
return 0;
}
