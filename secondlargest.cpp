#include<iostream>
using namespace std;
#define n 10
int main(){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
          max=arr[i];
        }
    }
    int secondmax=arr[0];
    for(int i=0;i<n;i++){
        if(secondmax<arr[i] && max>arr[i]){
            secondmax=arr[i];
        }
    }
    cout<<"second max is = "<<secondmax;
    return 0;
}