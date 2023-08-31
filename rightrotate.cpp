#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,d,i=0;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter the unit for rotation\n";
    cin>>d;
    cout<<"enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     return 0;
}