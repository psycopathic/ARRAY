#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
int i=0,j=0;
int arr1[]={1,2,3,4,5},arr2[]={6,7,8,9,10};
n=sizeof(arr1)/sizeof(int);
m=sizeof(arr2)/sizeof(int);
int k=0;
int arr3[k]={0};
while(i<n && j<m){
    if(arr1[i]<arr2[j]){
          arr3[k++]=arr1[i++];
    }
    else{
        arr3[k++]=arr2[j++];
    }
}
while(i<n)
arr3[k++]=arr1[i++];
while(j<m)
arr3[k++]=arr2[j++];
for(i=0;i<k;i++){
    cout<<arr3[i]<<" ";
}
 return 0;
}
