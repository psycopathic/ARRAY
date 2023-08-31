#include<iostream>
using namespace std;
#define n 10
int main(){
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
          min=arr[i];
        }
    }
     cout<<"min is = "<<min<<endl;
    int secondmin=arr[0];
    for(int i=0;i<n;i++){
        if(secondmin>=arr[i] && min<=arr[i]){
            secondmin=arr[i];
        }
    }
    cout<<"second min is = "<<secondmin;
    return 0;
}