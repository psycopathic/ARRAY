#include<iostream>
using namespace std;
int main(){
    int max,min,n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
     for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    max=arr[0];
     for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    min=arr[0];
     for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"maximum element in array = "<<max<<"\nminimum elements in array = "<<min<<endl;
    return 0;
    
}