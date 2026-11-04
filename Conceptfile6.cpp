#include <iostream>
#include <cmath>
#include <array>
#include <string>
using namespace std;
typedef int integer;
struct rational{
    integer numerator;
    integer denominator;
};
struct employee{
    string name;
    integer age;
    rational salary;
};
using namespace std;
int main(){
    array<array<integer,3>,5>array;
    integer i,j;
    cout<<"Enter the elements of the array: "<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            cin>>array[i][j];
        }
    }
    cout<<"The elements of the array are: "<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    employee b;
    b.salary.numerator=5000;
    b.salary.denominator=1;
    cout<<"Employee salary is: "<<b.salary.numerator<<"/"<<b.salary.denominator<<endl;
    b.name="John Doe";
    b.age=30;   
    cout<<"Employee name is: "<<b.name<<endl;
    cout<<"Employee age is: "<<b.age<<endl;
    return 0;
}