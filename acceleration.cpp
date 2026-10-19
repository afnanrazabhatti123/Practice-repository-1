#include<iostream>
#include<string>
using namespace std;
int main(){
double vf,vi,s,a;
cout<<"Enter initial velocity:"<<endl;
cin>>vi;
cout<<"Enter final velocity:"<<endl;
cin>>vf;
cout<<"Enter distance velocity:"<<endl;
cin>>s;
a=((vf*vf)-(vi*vi))/(2*s);
cout<<"Value of acceleration is:"<<a;
return 0;
}