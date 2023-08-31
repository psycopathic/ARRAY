#include<iostream>
using namespace std;
void duplicate(int *arr,int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1] )
        {
           count++;
        }
    }
    cout<<"number of duplicate elements are : "<<count;
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