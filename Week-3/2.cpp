#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,c=0,s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            int min=a[i];
            int loc=i;
            for(j=i+1;j<n;j++)
            {
                c++;
                if(min>a[j])
                {
                    min=a[j];
                    loc=j;
                }
            }
            s++;
            int temp=a[i];
            a[i]=a[loc];
            a[loc]=temp;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n comparision = "<<c;
        cout<<"\n swaps = "<<s;
    }
}  