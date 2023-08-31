#include<iostream>
using namespace std;
void difference(int *arr1,int *arr2,int n,int m)
{
    int *arr3=new int[n+m];
    int i,j,k;
    i=j=k=0;
   while(i<n && j<m)
 {   
     if(arr1[i]<arr2[j])
       arr3[k++]=arr1[i++];
      else if(arr2[j]<arr1[i])
         j++;
      else
      {
         i++;
         j++;
       }
 }
       for(;i<n;i++)
         arr3[k++]=arr1[i];
       for(int x=0;x<k;x++)
         cout<<arr3[x]<<" ";
}
int main(){
 int n,m;
 cout<<"enter the size of array\n";
 cin>>n>>m;
 int arr1[n],arr2[m];
 for(int i=0;i<n;i++){
    cin>>arr1[i];
 }
 for(int i=0;i<n;i++){
    cin>>arr2[i];
 }
difference(arr1,arr2,n,m);
 return 0;
}