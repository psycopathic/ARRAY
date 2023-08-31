#include<iostream>
#include<algorithm>
using namespace std;
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
int main(){
    int n,i,j,k;
    cin>>n;
    int m;
    cin>>m;
    int arr1[n],arr2[m];
    for( i=0;i<n;i++){
        cin>>arr1[i];
    }
    for( j=0;j<m;j++){
        cin>>arr2[j];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
   unioon(arr1,arr2,n,m);
    
    return 0;
}