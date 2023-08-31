#include<iostream>
using namespace std;
void duplicate(int *arr,int n)
{   
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int hash[max]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1;i<=max;i++)
    {
        if(hash[i]>1)
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    duplicate(arr,n);
    return 0;
}