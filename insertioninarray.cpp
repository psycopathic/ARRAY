#include<iostream>
using namespace std;
void printarray(int *arr,int size);
void insertion(int num,int place,int arr[],int size){
  int size1=size+1;
    for(int i=size1-1;i>=place;i--){
        arr[i]=arr[i-1];
    }
   arr[place]=num;
   printarray(arr,size1);
}
void printarray(int *arr,int size){
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
    }
}
int main(){
 int n;
 cout<<"enter the size of array\n";
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int num,place;
 cout<<"enter the number\n";
 cin>>num;
 cout<<"where to place it\n";
 cin>>place;
 insertion(num,place,arr,n);
 return 0;
}