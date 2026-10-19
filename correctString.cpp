#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main(){
    string a;
    cout<<"Enter your nickname:";
    getline(cin,a);
    cout<<endl;
    cout<<"Dear your nick name is "<<a<<"!";
}