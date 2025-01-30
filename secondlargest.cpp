#include<iostream>
#include<climits>
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
    //smax element
    int max=INT_MIN;
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }

    int smax=INT_MIN;
    for(int i=1;i<=n-1;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    }

    cout<<"largest element is "<<max<<endl;
    cout<<"second largest element is "<<smax;
}