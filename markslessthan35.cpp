#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of students";
    cin>>n;

    int marks[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    //output
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}