#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                 int temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
                }
            }
        }
        int flag=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            flag=1;
        }
        if(flag==1)
          cout<<"YES";
        else
         cout<<"NO";
    }
}