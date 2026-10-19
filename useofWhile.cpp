#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void table(int x,int y){
    int i=1;
    while(i<=y){
        cout<<x<<" X "<<i<<" = "<<x*i<<endl;
        i++;
    }
    return;
}
int main(){
    int a,b;
    cout<<"Enter the number whose table you want to print: "<<endl;
    cin>>a;
    cout<<"Also enter the number upto which you want to print table: "<<endl;
    cin>>b;
    table(a,b);
    return 0;
}