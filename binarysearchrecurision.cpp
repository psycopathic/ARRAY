#include<iostream>
using namespace std;
int binary_search(int arr[],int l,int h,int key)
{   
    int mid;
    if(l<=h)
    {
       mid=(l+h)/2;
       if(key==arr[mid])
       {
        return mid;
       }
       else if(key<arr[mid])
       {
        return binary_search(arr,l,mid-1,key);
       }
       else
       {
         return binary_search(arr,mid+1,h,key);
       }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the number to search\n";
    cin>>key;
   int c=binary_search(arr,0,n-1,key);
    if(c==-1)
    {
        cout<<"not found"<<endl;
    }
    else 
    {
        cout<<"found"<<endl;
    }
    return 0;
}