#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"enter the element to insert\n";
  int key,x;
  cin>>key;
  for(int i=0;i<n;i++){
    if(key<arr[i]){
       x=i;
       break;
    }
  }
 // cout<<x<<endl;
 for(int i=x;i<n;i++)
 {
    arr[n]=arr[n-1];
 }
 n++;
 arr[x]=key;
 for(int i=0;i<n;i++)
 {
    cout<<arr[i]<<" ";
 }
  return 0;
}