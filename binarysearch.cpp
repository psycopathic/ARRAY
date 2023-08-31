#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
int s=0,l=size-1,mid=0;
while(l>=s){
mid=(l+s)/2;
if(arr[mid]==key){
return 1;
}
else if(key<arr[mid]){
  l=mid-1;
  }
  else{
  s=mid+1;}
}
return 0;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int key;
cin>>key;
int a=binarysearch(arr,n,key);
if(a){
cout<<"number found\n";
}
else{
cout<<"not found\n";
}
return 0;
}
