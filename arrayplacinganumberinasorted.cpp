#include<iostream>
using namespace std;
int* sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
    }
    return arr;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int *p=sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<"input a number to insert\n";
    int num;
    cin>>num;
    cout<<"enter the index where to insert\n";
    int ind;
    cin>>ind;
    n=n+1;
    for(int i=n-1;i<=ind;i--){
        arr[i+1]=arr[i];
    }
    arr[ind]=num;
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}