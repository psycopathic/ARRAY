#include<iostream>
using namespace std;
int main()
{  
    int n,sum=0;
    cout<<"enter the size of element\n";
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int total_sum=(n+1)*(n+2)/2;
    cout<<total_sum<<endl;
     for(int i=0;i<n;i++)
    {
     sum+=arr1[i];
    }
    cout<<sum<<endl;
    cout<<"missing number is "<<total_sum-sum<<endl;
    return 0;
}