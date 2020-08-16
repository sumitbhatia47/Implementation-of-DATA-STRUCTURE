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
    cout<<"\nEnter the location where you want to delete:";
    cin>>pos;

    if (pos>n)
    {
        cout<<"Invalid Position.";
    }
    else
    {
    // deletion at specific position.............
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    }
    cout<<"\nAfter Deleted Array are........."<<endl;
    for(i=0;i<n-1;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}
