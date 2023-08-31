#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the index to fetch\n";
    cin>>a;
    int n;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(a>=0 && a<n)
    {
    for(int i=0;i<n;i++)
    {
        if(a==i)
        {
          cout<<"index found\n***********\nvalue at index "<<i<<" is "<<arr[i]<<endl;
          break;        }
    }
    }
    else
    {
        cout<<"index not found \n";
    }
    return 0;
}