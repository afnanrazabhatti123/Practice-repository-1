#include<iostream>
#include<string>
#include<cmath>
double half(double n){
    double c;
    c=n/2;
    return c; 

}
using namespace std;
int main(){
    double n;
    double c;
    cout<<"Enter any number whose half you want:";
    cin>>n;
    c=half(n);
    cout<<endl;
    cout<<"Half of " <<n<<" is:";
    cout<<c<<endl;
    return 0;
}