#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key);
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter the number to find\n";
int key;
cin>>key;
int a=linearsearch(arr,n,key);
if(a==1){
    cout<<"numeber found\n";
}
else{
    cout<<"try again\n";
}
return 0;
}
int linearsearch(int arr[],int size,int key){
for(int i=0;i<size;i++){
    if(arr[i]==key){
        return 1;
    }
}
return 0;
}

