//Finding the largest element
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;

    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //max element
    int max=arr[0]; //INT_MIN can also be used
    for(int i=1;i<=n-1;i++){
        if(max,arr[i]) max=arr[i];
    }
    cout<<max;
}