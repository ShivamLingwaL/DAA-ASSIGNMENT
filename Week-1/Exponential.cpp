#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
     {
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
         cin>>k;
        int flag=0,c=0;
        if(a[0]==k)
        {
           c++;
           cout<<"Present";                              
           cout<<c;
        }
        else 
        c++;
        int x=1;
        while(a[x]<=k && x<n )
        {
           c++;
           x=x*2; 
        }
   for(int i=x/2;i<n;i++)
   { 
       c++;
            if(a[i]==k)
             {
               cout<<"Present";
               flag=1;
               break;
             }
    }
    if(flag==0)
        cout<<"Not Present ";
        cout<<c;
    t--;
}
return 0;
}