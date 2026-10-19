#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void table(int a){
    for(int c=1;c<=10;c++){
        cout<<a<<" x "<<c<<"="<<a*c<<endl;
    }
}
int main(){
    int c;
    cout<<"Enter any number whose table you want to print:"<<endl;
    cin>>c;
    table(c);
}
