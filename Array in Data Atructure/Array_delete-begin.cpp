#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,pos;
    cout<<"\nEnter size of array :";
    cin>>n;
    cout<<"\nEnter element of array :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // deletion at specific position.............
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }

    cout<<"\nAfter Deleted Array are........."<<endl;
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
