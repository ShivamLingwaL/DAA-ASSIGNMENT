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
     int a[n];
     for(i=0;i<n;i++)
      cin>>a[i];
     cin>>k;
   for(i=0;i<n;i++)
   {
       c++;
        if(a[i]==k)
        {
          cout<<"Present "<<c;
          flag = 1;
          break;
        }      
   }
   if(flag==0)
     cout<<"Not Present "<<c;
   }
    return 0;
}