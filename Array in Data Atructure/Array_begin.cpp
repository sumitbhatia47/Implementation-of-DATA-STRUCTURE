#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,num,pos;
    cout<<"\nEnter size of array :";
    cin>>n;
    cout<<"\nEnter element of array :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // Insertion.......
    cout<<"\nEnter the number where you want to insert :";
    cin>>num;

    for(i=n;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=num;
    cout<<"\nFinal Array are.........";
    for(i=0;i<n+1;i++)
    {
        cout<<"\n"<<a[i]<<" ";
    }
    return 0;
}
