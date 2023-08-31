#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    while(j>i){
     while(a[i]<0){
        i++;
     }
     while(a[j]>=0){
        j--;
     }
     if(i<j){
        swap(a[i],a[j]);
     }
    }
    for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
    }
    return 0;
}