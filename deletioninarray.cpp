#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the index to delete\n";
    cin>>key;
    arr[key]=0;
    for(int i=key;i<n;i++){
        arr[i]=arr[i+1];
    }
    n-=1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}