#include<bits/stdc++.h>
using namespace std;
bool isSubset(int a1[],int a2[],int n1,int n2)
{
    sort(a1,a1+n1);
    sort(a2,a2+n2);
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            return false;
        }
        if(a1[i]==a2[j])
        {
            i++;
        }
        j++;
    }
    return (i==n1);
}
int main()
{
    int n1,n2;
    cin>>n1;
    int a1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    cin>>n2;
    int a2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    if(isSubset(a1,a2,n1,n2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
