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
    //linear search
    int x;
    cout<<"enter the number to be searched ";
    cin>>x;
    //checkmark
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"element is present ";
    else cout<<"element is not found";
}