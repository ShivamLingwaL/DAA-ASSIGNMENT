#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
     while(t--)
   {
     int n,k,i,flag=0,c=0;
     cin>>n;
     int l=0,h=n-1;
     int a[n];
     for(i=0;i<n;i++)
      cin>>a[i];
     cin>>k;
    while(l<=h)
    {
        c++;
         int mid=(l+h)/2;
         if(k==a[mid])
         {
            cout<<"Present "<<c;
            flag=1;
            break;
         }
        if(a[mid]<k)
         l=mid+1;
        else
        h=mid-1;
    }
   if(flag==0)
    cout<<"Not Present "<<c;
   }
    return 0;
}