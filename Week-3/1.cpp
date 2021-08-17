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
        for(i=1;i<n;i++)
        {
            int temp=a[i];
            j=i-1;
            s++;
            while(j>=0&&a[j]>temp)
            {
                c++;
                s++;
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=temp;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n comparision = "<<c;
        cout<<"\n swaps = "<<s;
    }
}