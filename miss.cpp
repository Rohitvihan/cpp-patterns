#include<bits/stdc++.h>
using namespace std;
int missing_num(int arr[],int n)
{
    int sum=0,s2=0;
    sum=n*(n+1)/2;
    cout<<"sum is:"<<sum<<endl;
    for(int i=0;i<n-1;i++)
    {
        s2=s2+arr[i];
    }
    cout<<"s2 value is:"<<s2<<endl;
    return {sum-s2};
}
int conse_ones(int arr[],int n)
{
    int count=0,maxi=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
         {
            count+=1;
            maxi=max(count,maxi);
         }
        else
        {
             count=0;
        }
    }
    return maxi;
}
int single(int arr[],int n)
{
    int xorr=0;
    for(int i=0;i<n;i++)
    {
        xorr=xorr^arr[i];
    }
    return xorr;
}
int main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    int res=single(arr,n);
    cout<<"the element with 1 repetition is:"<<res;
    return 0;
}
