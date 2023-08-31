#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0,j=n-1;
    cout<<"enter the negative and positive elements in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    while(i<j)
    {
         while(arr[i]<0)
         {
            i++;
         }
         while(arr[j]>=0)
         {
            j--;
         }
         if(i<j)
         {
           swap(arr[i],arr[j]);
         }
    }
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}