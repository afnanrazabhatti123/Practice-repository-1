#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
100-80:A
79-70:B
69-60:C
59-50:D
49-40:E
39 or less:F
*/
char grade(float marks);
int main(){
    float marks;
    string a;
    cout<<"Enter your percentage:";
    cin>>marks;
    cout<<endl;
    cout<<"Your grade is:"<<grade(marks)<<endl;
    return 0;
}
char grade(float marks){
    if(marks>100)
    return 'X';
    if(marks<=100||marks>=80)
    return 'A';
    if(marks<=79||marks>=70)
    return 'B';
    if(marks<=69||marks>=60)
    return 'C';
    if(marks<=59||marks>=50)
    return 'D';
    if(marks<=49||marks>=40)
    return 'E';
    if(marks<=39)
    return 'F';
}