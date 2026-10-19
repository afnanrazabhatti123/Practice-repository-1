#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,next,n;
    cout<<"Enter the value upto which you want to print the series:";
    cin>>n;
    cout<<"Fibonacci series from 0 to 50:"<<endl;
    cout<<n1<<" "<<n2<<" ";
    cout<<endl;
    cout<<endl;
    next=n1+n2;
    while(next<=n){
        cout<<next<<" ";
        n1=n2;
        n2=next;
        next=n1+n2;
    }
    return 0;
}