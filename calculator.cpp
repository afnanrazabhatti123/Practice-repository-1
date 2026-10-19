#include <iostream>
#include <string>
using namespace std;
int main(){
double a,b,c;
int choice;
cout<<"Enter 1 for multiplication,2 for division,3 for addition,4 for subtration:"<<endl;
cin>>choice;
cout<<"Now enter first value:"<<endl;
cin>>a;
cout<<"Now enter second value:"<<endl;
cin>>b;
if(choice==1){
c=a*b;
cout<<a<<"*"<<b<<"="<<c<<endl;
}
if(choice==2){
c=a/b;
cout<<a<<"/"<<b<<"="<<c<<endl;
}
if(choice==3){
c=a+b;
cout<<a<<"+"<<b<<"="<<c<<endl;
}
if(choice==4){
c=a-b;
cout<<a<<"-"<<b<<"="<<c<<endl;
}
return 0;
}