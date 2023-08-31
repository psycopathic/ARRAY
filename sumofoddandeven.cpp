/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sumeven=0,sumodd=0;
    for(int i=0;i<10;i++){
       if(arr[i]%2==0){
         sumeven+=arr[i];
       }
       else{
        sumodd+=arr[i];
       }
    }
    cout<<"sum of odd appearence "<<sumodd<<"\nsum of even appearence "<<sumeven;
    return 0;
}