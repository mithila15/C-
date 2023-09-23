#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int x,y;
    cin>>x>>y;
    for(int i=0;i<n;i++)
    {
        if(i<x-1 || i>y-1)
            cout<<arr[i]<<" ";
    }
    return 0;
}
