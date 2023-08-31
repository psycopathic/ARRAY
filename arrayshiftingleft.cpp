#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
   int m=sizeof(arr)/sizeof(int);
   cout<<m;
   for(int i=0;i<m-1;i++){
       cout<<arr[i]<<" ";
   }
   return 0;

}