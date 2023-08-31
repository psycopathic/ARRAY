/*Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    float sum;
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    cout<<"average = "<<sum/10;
}