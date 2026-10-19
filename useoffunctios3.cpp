#include<iostream>
#include<string>
#include<cmath>
using namespace std;
double circumference(double n){
    double c;
    c=2*n*3.14;
    return c;
}
int main(){
    double u,x;
    cout<<"Enter the radius of the circle:"<<endl;
    cin>>u;
    x=circumference(u);
    cout<<"Circumference of the circle:"<<x<<endl;
}