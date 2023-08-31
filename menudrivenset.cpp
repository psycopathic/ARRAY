#include<iostream>
#include<algorithm>
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
void unioon(int *arr1,int *arr2,int n,int m)
{
   int i,j,k;
   i=j=k=0;
   int *arr3=new int[m+n];
   while(i<m && j<n)
   {
    if(arr1[i]<arr2[j])
     arr3[k++]=arr1[i++];
     else if(arr1[i]==arr2[j]){
        //arr3[k++]=arr1[i++];
        i++;
        j++;
     }
     else
     arr3[k++]=arr2[j++];
   }
    // for(int i=0;i<m+n;i++){
    //     cout<<arr3[i]<<" ";
    // }
   for( ;i<n;i++)
   arr3[k++]=arr1[i];
   for( ;j<m;j++)
   arr3[k++]=arr2[j];
   cout<<endl;
   for(int i=0;i<k;i++){
        cout<<arr3[i]<<" ";
    }

}
void intersection(int *arr1,int *arr2,int n,int m)
{
    int *arr3;
    arr3=new int [n+m];
    int i,j,k;
    i=k=j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j]){
            arr3[k++]=arr1[i];
            i++;
            j++;
        }
        if(arr1[i]<arr2[j])
             i++;
        else if(arr2[j]<arr1[i])
            j++;
    }
    for(int x=0;x<k;x++)
    {
        cout<<arr3[x]<<" ";
    }
}
void merging(int *arr1,int *arr2,int n,int m)
{
   int i,j,k;
   i=j=k=0;
   int *arr3=new int[m+n];
   while(i<m && j<n)
   {
    if(arr1[i]<arr2[j])
     arr3[k++]=arr1[i++];
     else
     arr3[k++]=arr2[j++];
   }
    // for(int i=0;i<m+n;i++){
    //     cout<<arr3[i]<<" ";
    // }
   for( ;i<n;i++)
   arr3[k++]=arr1[i];
   for( ;j<m;j++)
   arr3[k++]=arr2[j];
   cout<<endl;
   for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }

}

int main()
{
    int sw;
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
      for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<"select the operation you want to perform\n";
    cout<<"1.union\n2.intersection\n3.difference\n4.merging\n";
    cin>>sw;
    switch(sw)
    {
        case 1:
         unioon(arr1,arr2,n,m);
         break;
        case 2:
         intersection(arr1,arr2,n,m);
         break;
        case 3:
          difference(arr1,arr2,n,m);
         break;
        case 4:
         merging(arr1,arr2,n,m);
         break;
     }
     return 0;
}