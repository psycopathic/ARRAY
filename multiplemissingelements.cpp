#include<iostream>
using namespace std;
void multiple(int *arr,int n)
{
     int diff=arr[0]-0;
     for(int i=0;i<n;i++)
     {
        if(arr[i]-i!=diff)
        {
            while(diff<arr[i]-i)
            {
                cout<<i+diff<<endl;
                diff++;
            }
        }
     }
}
int main()
{
    int n;
    cout<<"enter the size\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    multiple(arr,n);
    return 0;
}