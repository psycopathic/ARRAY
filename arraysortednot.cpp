#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5,4};
    int flag=0;
    int x=sizeof(arr)/sizeof(int);
    for(int i=0;i<x-1;i++)
    {
       if(arr[i]>arr[i+1])
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        cout<<"not sorted\n";
    }
    else
    {
        cout<<"sorted\n";
    }
    return 0;
}