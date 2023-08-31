#include<iostream>
using namespace std;
void duplicate(int *arr,int n)
{
    int lastdup=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1] && arr[i]!=lastdup)
        {
            cout<<arr[i]<<endl;
            lastdup=arr[i];
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